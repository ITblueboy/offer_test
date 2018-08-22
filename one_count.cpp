class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		if (n != 0)
		{
			do
			{
				count++;
				n = n&(n - 1);
			} while (n);
		}
		return count;
	}
};