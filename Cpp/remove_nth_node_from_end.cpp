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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev_ptr = new ListNode(0, head);
        ListNode* slow = prev_ptr;
        ListNode* fast = head;

        while (n>0){
            fast = fast ->next;
            n--;
        }

        while(fast != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }

        slow-> next = slow -> next-> next;
        return prev_ptr ->next;
    }
};