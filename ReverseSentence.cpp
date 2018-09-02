class Solution {
public:
	string ReverseSentence(string str) {
		string s;
		int length = str.size();
		if (length == 0)
		{
			return s;
		}
		int i = 0;
		int start = 0;
		while (i<length)
		{
			if (str[i] == ' ')
			{
				reverse(str.begin() + start, str.begin() + i);
				start = i + 1;
			}
			if (i == length - 1)
			{
				reverse(str.begin() + start, str.end());
			}
			i++;
		}
		reverse(str.begin(), str.end());
		return str;
	}
};