/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*

Approach :

Iterate through and just count the nodes
*/



class Solution {
public:
    int printInorder(TreeNode* node,int ctr)
{
    if (node == NULL)
        return ctr;

    /* first recur on left child */
    ctr=printInorder(node->left,ctr+1);

    /* then print the data of node */


    /* now recur on right child */
    ctr=printInorder(node->right,ctr);
    return ctr;
}


    int countNodes(TreeNode* root) {
        int count=printInorder(root,0);



        return count;

    }
};
