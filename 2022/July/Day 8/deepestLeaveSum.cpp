// Source : https://leetcode.com/problems/deepest-leaves-sum/submissions/
// Complexity too much, time limit exceeded
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
    int deepestLeavesSum(TreeNode* root) {
    map<int,vector<int>,std::greater<int>> m;
         int sum=0;
    int depth =0;
        m = inOrder(root,m,depth);
        map<int, vector<int>>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        vector<int> temp = (*it).second;

        for(auto&i:temp)
        {
            sum+=i;
        }
        return sum;
    }
        return sum;
    }

    map<int,vector<int>,std::greater<int>> inOrder(TreeNode *root,map<int,vector<int>,std::greater<int>> m,int depth)
    {
        vector<int> temp;
        if (root == NULL)
        return m;

        if(root->left ==NULL && root->right==NULL)
        {
            //cout<<"Root : "<<root->val<<"Depth :"<<depth;
            temp = m[depth];
            temp.insert(temp.end(),root->val);
            m[depth] = temp;
        }
    /* first recur on left child */
    m= inOrder(root->left,m,depth+1);


    /* now recur on right child */
    m=inOrder(root->right,m,depth+1);

        return m;

    }

};
