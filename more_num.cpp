class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int size = (int)numbers.size();
		if (size == 0)
		{
			return 0;
		}
		if (size == 1)
		{
			return numbers[0];
		}
		sort(numbers.begin(), numbers.end());
		int num = numbers[1];
		int count = 1;
		int sum = 0;
		if (size % 2 == 0)
		{
			sum = size / 2;
		}
		if (size % 2 == 1)
		{
			sum = size / 2 + 1;
		}
		int i = 1;
		while (i<size)
		{
			if (numbers[i] == num)
			{
				count++;
				if (count>sum)
				{
					return num;
				}
			}
			else if (numbers[i] != num)
			{
				num = numbers[i];
				count = 1;
			}
			i++;
		}
		return 0;
	}
};