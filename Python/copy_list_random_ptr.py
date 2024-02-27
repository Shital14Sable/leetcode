"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return None
        
        record = {}
        node = head
        while node:
            new_node = Node(node.val)
            record[node] = new_node
            node = node.next
        
        node = head
        while node:
            new_node = record[node]
            new_node.next = record[node.next] if node.next else None
            new_node.random = record[node.random] if node.random else None

            node = node.next
        
        return record[head]