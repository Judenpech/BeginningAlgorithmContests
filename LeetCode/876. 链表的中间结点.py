# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        pa=pb=head
        while pa and pb.next:
            if pb.next.next==None:
                return pa.next
            pa=pa.next
            pb=pb.next.next
        return pa