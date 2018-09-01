class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		if (n<0)
		{
			return 0;
		}
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			int num = i;
			while (num)
			{
				if (num % 10 == 1)
				{
					count++;
				}
				num = num / 10;
			}
		}
		return count;
	}
};