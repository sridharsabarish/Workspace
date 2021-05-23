// Source : https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/submissions/
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
class Solution {
public:
    int sumEvenGrandparent(TreeNode* root)
    {

        return calcSum(root);



    }


    int calcSum(TreeNode* root)
    {
        int temp =0;
        if(root)
        {
        if(root->val%2==0)
        {

            if(root->left)
            {
                if(root->left->left)
                {
                    temp +=root->left->left->val;
                }
                if(root->left->right)
                {
                    temp +=root->left->right->val;
                }


            }



            if(root->right)
            {
                if(root->right->left)
                {
                     temp +=root->right->left->val;
                }
                if(root->right->right)
                {
                     temp +=root->right->right->val;
                }


            }

        }
        }
        else{
        return temp;
        }

        temp+= calcSum(root->left);
        temp+= calcSum(root->right);

        return temp;
    }
};
