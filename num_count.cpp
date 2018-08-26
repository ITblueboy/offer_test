class Solution {
public:
	int GetNumberOfK(vector<int> data, int k) {
		int count = 0;
		size_t i = 0;
		while (i<data.size())
		{
			if (data[i] == k)
			{
				count++;
				if (data[i + 1] != k)
				{
					return count;
				}
			}
			i++;
		}
		return count;
	}
};