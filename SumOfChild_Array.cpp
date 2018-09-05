class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int size = array.size();
		if (size == 0)
		{
			return 0;
		}
		int count = array[0];
		int sum = array[0];
		int i = 1;
		while (i<size)
		{
			if (array[i]<0)
			{
				if (count<array[i])
				{
					count = array[i];
				}
				else
				{
					if (array[i + 1]>0)
					{
						int num = count + array[i] + array[i + 1];
						if (num>count&&num>array[i + 1])
						{
							count += array[i];
						}
						else if (num>count&&num<array[i + 1])
						{
							count = array[i + 1];
							i++;
						}
						else
						{
							count = array[i + 1];
							i++;
						}
					}
					else
					{
						int number = count + array[i] + array[i + 1];
						if (number>0)
						{
							count += array[i];
						}
						else
						{
							count = array[i + 1];
							i++;
						}
					}
				}
				if (count>sum)
				{
					sum = count;
				}
			}
			else
			{
				count += array[i];
				sum = count;
			}
			i++;
		}
		return sum;
	}
};