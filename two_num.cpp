class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		int sum = 0;
		if (data.size() != 0)
		{
			sort(data.begin(), data.end());
			size_t i = 1;
			int count = 1;
			int num = data[0];
			while (i<data.size())
			{
				if (data[i] == num)
				{
					count++;
				}
				else if (data[i] != num)
				{
					if (count % 2 == 1)
					{
						if (sum == 0)
						{
							*num1 = num;
							num = data[i];
							count = 1;
							sum++;
						}
						else
						{
							*num2 = num;
							num = data[i];
							count = 1;
						}
					}
					else if (count % 2 == 0)
					{
						num = data[i];
						count = 1;
					}
				}
				if (i == data.size() - 1 && count == 1)
				{
					*num2 = num;
				}
				i++;
			}
		}
	}
};