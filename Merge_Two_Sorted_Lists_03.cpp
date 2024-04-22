class Solution {
	public:
		ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
			ListNode temp = (0);
			ListNode* tail = &temp;

			while (list1 && list2) {
				if (list1->val < list2->val) {
					tail->next = list1;
					list1 = list1->next;
				}
				else {
					tail->next = list2;                         
					list2 = list2->next;                           
				}
				tail = tail->next;
			}
			tail->next = list1 ? list1 : list2;
			return temp.next;
		}
};                        
