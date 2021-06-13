# source : https://leetcode.com/problems/deepest-leaves-sum/submissions/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def deepestLeavesSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        l={}
        depth = 0;
        global maxDepth;
        maxDepth=0;
        l = self.iter(root,l,depth);
        # print(l)
        # print(maxDepth)
        return sum(l[maxDepth])
    def iter(self,root,l,depth):

        if(root):
            global maxDepth;
            maxDepth= max(depth,maxDepth);
            if(not root.left and not root.right):
                l[depth]=l.get(depth,[]);
                l[depth].append(root.val);

        if(root.left):
            l= self.iter(root.left,l,depth+1);
        if(root.right):
            l= self.iter(root.right,l,depth+1)
        return l;






            
