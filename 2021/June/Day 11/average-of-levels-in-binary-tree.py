# source : https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        self.dicts={};
        depth =0;
        self.inorder(root,depth);
        l=[];

        for i in self.dicts:
            sums =0.0;
            for elem in self.dicts[i]:
                sums+=elem;
            sums/=len(self.dicts[i]);
            l.append(sums);
        return l

    def inorder(self,root,depth):
        if(root):
            self.dicts[depth] = self.dicts.get(depth,[]);
            self.dicts[depth].append(root.val);
            self.inorder(root.left,depth+1);
            self.inorder(root.right,depth+1);









        
