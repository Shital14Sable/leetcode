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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while (curr != nullptr && curr -> next != nullptr)
        {
            int temp_val = curr -> val;
            ListNode* next_ptr =  curr -> next;
            int next_val = next_ptr -> val;
            if ( temp_val == next_val) curr -> next = next_ptr -> next;
            else curr =  curr -> next;
        }
        return head;
        
    }
};