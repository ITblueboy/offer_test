class Solution {
public:
	double Power(double base, int exponent) {
		if (base == 0.0)
		{
			return 0.0;
		}
		if (exponent == 0)
		{
			return 1.0;
		}
		int num = abs(exponent);
		double sum = 1;
		while (num)
		{
			sum *= base;
			num--;
		}
		if (exponent<0)
		{
			return 1 / sum;
		}
		return sum;
	}
};