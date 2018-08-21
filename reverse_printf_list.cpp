/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> v;
		ListNode* cur = head;
		while (cur != NULL)
		{
			v.push_back(cur->val);
			cur = cur->next;
		}
		std::reverse(v.begin(), v.end());
		return v;
	}
};