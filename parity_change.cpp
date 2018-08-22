class Solution {
public:
	void reOrderArray(vector<int> &array) {
		size_t size = array.size();
		if (size == 0)
		{
			return;
		}
		vector<int> v(size, 0);
		size_t i = 0;
		for (size_t j = 0; j <= size; j++)
		{
			if (array[j] % 2 == 1)
			{
				v[i] = array[j];
				i++;
			}
		}
		for (size_t j = 0; j <= size; j++)
		{
			if (array[j] % 2 == 0)
			{
				v[i] = array[j];
				i++;
			}
		}
		for (i = 0; i<size; i++)
		{
			array[i] = v[i];
		}
	}
};