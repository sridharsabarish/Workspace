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

Approach to the problem.

Given : Root, sumTarget

How can we find the path;

maybe have an array;
// Do a traversal, maybe inorder,preorder or post order doesn't matter;
// Add those to the array and maybe, just a maybe, if there is a match send it out?



*/




class Solution {
public:

    vector<vector<int>> helper(TreeNode* root,int targetSum, int sum,vector<int> path,vector<vector<int>> out)
    {

        if(root==NULL)
        {
            if(sum==targetSum)
            {


                    out.insert(out.end(),path);

            }


        }
        else
        {
            sum+=root->val;
            path.insert(path.end(),root->val);
            out=helper(root->left,targetSum,sum,path,out);
            out=helper(root->right,targetSum,sum,path,out);
        }
        return out;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){return {};}
        vector<int> path;
        vector<vector<int>> out;
        if(targetSum==root->val)
        {if((root->left==NULL) && (root->right==NULL))
                {
                path.insert(path.end(),root->val);
                out.insert(out.end(),path);
            return out;
        }
        }

        if(targetSum==root->val)
        {
            return {};
        }
        // Invoke the other function when doing the traversal; Store the path in the vector or something;

        int sum=0;
        return helper(root,targetSum,sum,path,out);



    }


};
