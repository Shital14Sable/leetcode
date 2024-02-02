/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return 0;
        ListNode * ptr_A = headA;
        ListNode * ptr_B = headB;

        while (ptr_A  != ptr_B){
            if (ptr_A == NULL) ptr_A = headB;
            else ptr_A = ptr_A -> next;

            if (ptr_B == NULL) ptr_B = headA;
            else ptr_B =  ptr_B -> next;
        }

        return ptr_A;
        
    }
};