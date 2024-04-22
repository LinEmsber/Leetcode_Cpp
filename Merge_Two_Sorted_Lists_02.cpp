class Solution {
	public:
		ListNode* mergeTwoLists(ListNode* list1, ListNode* l2) 
		{
			// If list1 happen to be NULL, return list2
			if(list1 == NULL) return l2;
			if(l2 == NULL) return list1;

			if(list1->val <= l2->val) {
				list1->next = mergeTwoLists(list1->next, l2);
				return list1;
			}
			else {
				l2->next = mergeTwoLists(list1, l2->next);
				return l2;            
			}
		}
};	
