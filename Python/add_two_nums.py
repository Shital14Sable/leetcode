# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        i = 0
        num1 = 0 
        while l1:
            num1 += l1.val*(10**i)
            i += 1
            l1 = l1.next
        
        j = 0
        num2 = 0 
        while l2:
            num2 += l2.val*(10**j)
            j+= 1
            l2 = l2.next
        
        num3 = num1 + num2
        num3 = list(map(int, str(num3)))
        num3.reverse()
        l3 = ListNode(0)
        dummy = l3
        for l in range(len(num3)):
            l3.next = ListNode(num3[l])
            l3 = l3.next
        
        return dummy.next