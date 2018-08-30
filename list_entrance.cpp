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
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		if (pHead == NULL || pHead->next == NULL || pHead->next->next == NULL)
		{
			return NULL;
		}
		ListNode* fast = pHead;
		ListNode* slow = pHead;
		ListNode* miss = NULL;
		ListNode* cur = pHead;
		int ret = 0;
		while (fast != NULL&&slow != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow)
			{
				ret = 1;
				miss = fast;
				break;
			}
		}
		if (ret == 1)
		{
			while (1)
			{
				if (miss == cur)
				{
					return cur;
				}
				miss = miss->next;
				cur = cur->next;
			}
		}
		return NULL;
	}
};