/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
*/
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
		{
			return NULL;
		}
		ListNode* cur = pHead;
		ListNode* prev = NULL;
		ListNode* del = NULL;
		while (cur != NULL&&cur->next != NULL)
		{
			if (cur->val == cur->next->val)
			{
				del = cur->next;
				while (del->next != NULL&&del->next->val == cur->val)
				{
					del = del->next;
				}
				if (cur == pHead)
				{
					pHead = del->next;
				}
				else
				{
					prev->next = del->next;
				}
				cur = del->next;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		return pHead;
	}
};