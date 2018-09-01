class Solution {
public:
	string LeftRotateString(string str, int n) {
		string s;
		if (str.size() == 0 || n>str.size())
		{
			return s;
		}
		int i = 0;
		string::iterator it = str.begin();
		while (i<n)
		{
			it++;
			i++;
		}
		reverse(str.begin(), it);
		reverse(it, str.end());
		reverse(str.begin(), str.end());
		return str;
	}
};