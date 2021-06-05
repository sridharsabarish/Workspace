# source : https://leetcode.com/problems/find-all-the-lonely-nodes/submissions/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def getLonelyNodes(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        l = [];
        l = self.iterate(root,l);
        return l;

    def iterate(self,root,l):

        if(root):

            if(root.left and not root.right):
                l.append(root.left.val);
            if(root.right and not root.left):
                l.append(root.right.val);
        if(root.left):
            l = self.iterate(root.left,l);
        if(root.right):
            l = self.iterate(root.right,l);
        return l;
