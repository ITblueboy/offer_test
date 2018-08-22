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
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL)
		{
			if (pHead2 != NULL)
			{
				return pHead2;
			}
			return NULL;
		}
		if (pHead2 == NULL)
		{
			if (pHead1 != NULL)
			{
				return pHead1;
			}
			return NULL;
		}
		ListNode* cur1 = pHead1;
		ListNode* cur2 = pHead2;
		ListNode* new_list = NULL;
		if (cur1->val>cur2->val)
		{
			new_list = new ListNode(cur2->val);
			cur2 = cur2->next;
		}
		else if (cur1->val<cur2->val)
		{
			new_list = new ListNode(cur1->val);
			cur1 = cur1->next;
		}
		else
		{
			new_list = new ListNode(cur1->val);
			cur1 = cur1->next;
		}
		ListNode* tail = new_list;
		while (cur1 != NULL&&cur2 != NULL)
		{
			if (cur1->val>cur2->val)
			{
				ListNode* new_node = new ListNode(cur2->val);
				tail->next = new_node;
				tail = tail->next;
				cur2 = cur2->next;
			}
			else if (cur1->val<cur2->val)
			{
				ListNode* new_node = new ListNode(cur1->val);
				tail->next = new_node;
				tail = tail->next;
				cur1 = cur1->next;
			}
			else
			{
				ListNode* new_node = new ListNode(cur2->val);
				tail->next = new_node;
				tail = tail->next;
				cur2 = cur2->next;
			}
		}
		if (cur1 != NULL&&cur2 == NULL)
		{
			tail->next = cur1;
		}
		if (cur1 == NULL&&cur2 != NULL)
		{
			tail->next = cur2;
		}
		return new_list;
	}
};