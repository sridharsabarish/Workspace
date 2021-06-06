# Source : https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/submissions/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def sumRootToLeaf(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        l=[];
        string =""
        l = self.calculatePath(root,string,l)
        out = 0;
        for i in l:
            out+=self.bin2ind(i)
        return out

    def calculatePath(self,root,string,l):

        if(root):
            string+=str(root.val);

        if(root.left):
            l = self.calculatePath(root.left,string,l);
        if(root.right):
            l = self.calculatePath(root.right,string,l);
        if(not root.left and not root.right):
            l.append(string)
        return l;
    def bin2ind(self,val):

        out = 0;
        length = len(val)-1
        for i in range(len(val)):
            out += int(math.pow(2,length-i)*(int(val[i])));
        return out;
