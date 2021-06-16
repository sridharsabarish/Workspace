# Source : https://leetcode.com/problems/sum-of-left-leaves/submissions/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        sums =0;
        sums=self.loop(root,sums,"center")
        return sums

    def loop(self,root,sums,parent):

        if(root and parent=="left") and(not root.left) and (not root.right):
            sums+=root.val;

        if(root.right):
            sums=self.loop(root.right,sums,"right");
        if(root.left):
            sums=self.loop(root.left,sums,"left");

        return sums;
