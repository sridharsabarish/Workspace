# Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """


        visited = [];
        curr = head;
        start = curr;

        finalVal =[];
        while(curr):
            if(curr.val not in visited):
                finalVal.append(curr.val);
            visited.append(curr.val);
            curr = curr.next;

        f=-1;
        ptr =None
        for i in finalVal:
            if(f==-1):
                ls = ListNode(i);
                ptr = ls
                f=1;
            else:
                ls.next =ListNode(i);
                ls = ls.next;
        return ptr
                
