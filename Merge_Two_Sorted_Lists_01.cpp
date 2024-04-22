/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Check existence of both lists
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        // Determine which list should be the head
        ListNode * head = NULL;
        if (list1->val > list2->val) {
            head = list2;
            list2 = list2->next;
        }
        else {
            head = list1;
            list1 = list1->next;
        }
		// Create a new node, curr, to operate the head
        ListNode * curr = head;

        // Use while loop to check the existence of elements of list1 and list2
		// Compare elements of two lists and then concatenate the smaller one to curr
		// Move to the next node and repeat the loop again until one of lists is not exist
        while (list1 && list2) {
            if (list1->val < list2->val) {
                curr->next = list1;
                list1 = list1->next;
            }
            else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        
        // Gandle the remaining element of bigger list
        if (!list1) curr->next = list2;
        else curr->next = list1;

        return head;
    }
};
