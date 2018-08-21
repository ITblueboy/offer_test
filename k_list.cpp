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
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		int count = 0;
		ListNode* cur = pListHead;
		while (cur != NULL)
		{
			count++;
			cur = cur->next;
		}
		if (k>count)
		{
			return NULL;
		}
		cur = pListHead;
		int num = count - k;
		while (num>0)
		{
			cur = cur->next;
			num--;
		}
		return cur;
	}
};