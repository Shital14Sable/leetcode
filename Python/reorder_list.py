# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        if head:
            slow_ptr =  fast_ptr = head
            while fast_ptr and fast_ptr.next:
                slow_ptr = slow_ptr.next
                fast_ptr = fast_ptr.next.next
            
            second_ptr = self.reverseList(slow_ptr)
            main_ptr = head

            while second_ptr:
                temp_ptr1, temp_ptr2 = main_ptr.next, second_ptr.next
                main_ptr.next = second_ptr
                second_ptr.next = temp_ptr1
                main_ptr = temp_ptr1
                second_ptr = temp_ptr2
        
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr_ptr = head.next
        prev_ptr =  head.next = None
          
        while curr_ptr:
            temp_list = curr_ptr.next
            curr_ptr.next = prev_ptr
            prev_ptr = curr_ptr
            curr_ptr = temp_list
        return prev_ptr