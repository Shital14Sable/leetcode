# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        if not headA or not headB:
            return None
        intersection_node = None
        ptr_A = headA
        ptr_B = headB

        while ptr_A != ptr_B:           
            if ptr_A == None:
                ptr_A = headB
            else:
                ptr_A = ptr_A.next

            if ptr_B == None:
                ptr_B = headA
            else:
                ptr_B = ptr_B.next
        
        return ptr_A
        