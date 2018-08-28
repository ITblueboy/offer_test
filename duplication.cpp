class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		int i = 0;
		while (i<length)
		{
			int num = numbers[i];
			int* p = std::find(numbers + i + 1, numbers + length, num);
			if (p != numbers + length)
			{
				*duplication = num;
				return true;
			}
			i++;
		}
		return false;
	}
};