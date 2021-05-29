# source : https://leetcode.com/problems/middle-of-the-linked-list/submissions/
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        cp = head;
        count =0;
        while(cp):
            count+=1;
            cp=cp.next;
        mid = int(count/2);

        count2=0;
        while(head):

            if(count2==mid):
                return head
            count2+=1;
            head = head.next;
        return -1;
