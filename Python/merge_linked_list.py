# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        elif not list2:
            return list1
        curr_ptr =  ListNode()
        ret_list = curr_ptr

        while list1 and list2:
            if list1.val < list2.val:
                ret_list.next = list1
                list1 = list1.next
            else:
                ret_list.next = list2
                list2 = list2.next
            ret_list = ret_list.next
        if list1:
            ret_list.next = list1
        if list2:
            ret_list.next = list2
        return curr_ptr.next