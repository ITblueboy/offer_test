/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL)
		{
			return NULL;
		}
		vector<int> v;
		ListNode* cur = pHead;
		while (cur != NULL)
		{
			v.push_back(cur->val);
			cur = cur->next;
		}
		reverse(v.begin(), v.end());
		cur = pHead;
		size_t i = 0;
		while (cur != NULL&&i <= v.size())
		{
			cur->val = v[i];
			i++;
			cur = cur->next;
		}
		return pHead;
	}
};