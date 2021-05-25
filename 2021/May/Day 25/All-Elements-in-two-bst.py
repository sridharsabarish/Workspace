# source  : https://leetcode.com/problems/all-elements-in-two-binary-search-trees/submissions/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def getAllElements(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: List[int]
        """
        lists =[]
        lists =self.traverse_tree(root1,lists);
        lists =self.traverse_tree(root2,lists);
        return sorted(lists)


    def traverse_tree(self,root,lists):

        if(root is not None):
            lists.append(root.val);

            lists = self.traverse_tree(root.left,lists);
            lists = self.traverse_tree(root.right,lists);

        return lists
