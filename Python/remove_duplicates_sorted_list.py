# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        while curr and curr.next is not None:
            val = curr.val
            if curr.next.val == val:
                curr.next = curr.next.next
            else:
                curr = curr.next
        return head