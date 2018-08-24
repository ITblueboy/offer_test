class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		if (index <= 0)
		{
			return 0;
		}
		int* numbers = new int[index];
		numbers[0] = 1;
		int next = 1;
		int next2 = 0;
		int next3 = 0;
		int next5 = 0;
		while (next<index)
		{
			int num2 = numbers[next2] * 2;
			int num3 = numbers[next3] * 3;
			int num5 = numbers[next5] * 5;
			int min = num2>num3 ? num3 : num2;
			min = min>num5 ? num5 : min;
			numbers[next] = min;
			while (numbers[next2] * 2 <= numbers[next])
			{
				next2++;
			}
			while (numbers[next3] * 3 <= numbers[next])
			{
				next3++;
			}
			while (numbers[next5] * 5 <= numbers[next])
			{
				next5++;
			}
			next++;
		}
		return numbers[index - 1];
	}
};