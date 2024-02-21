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
        if (list1 == NULL && list2 == NULL) return NULL;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* prev_ptr = new ListNode();
        ListNode* curr_ptr = prev_ptr;

        while( list1 != NULL && list2 != NULL){
            if(list1 -> val < list2 -> val){
                curr_ptr -> next = list1;
                list1 = list1 -> next;
            }
            else{
                curr_ptr -> next = list2;
                list2 = list2 -> next;
            }
            curr_ptr =  curr_ptr -> next;
        }
        if (list1 != NULL) curr_ptr ->next = list1;
        else curr_ptr ->next = list2;
        return prev_ptr -> next;
    }
};