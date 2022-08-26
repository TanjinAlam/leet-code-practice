# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, l1, l2):
        N = l1
        M = l2
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head = curr = ListNode(0)
        while N and M:
            if N.val < M.val:
                curr.next, N = N, N.next
            else:
                curr.next, M = M, M.next
            curr = curr.next
        curr.next = N or M
        return head.next
        