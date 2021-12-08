// Increasing Order Search Tree
// https://leetcode.com/problems/increasing-order-search-tree/


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
    void inorder(TreeNode *root,vector<int>&p)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left,p);
        p.push_back(root->val);
        inorder(root->right,p);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>p;
        inorder(root,p);
        TreeNode *temp=new TreeNode(p[0]);
        TreeNode *n=temp;
        for(int i=1;i<p.size();i++)
        {
            temp->right=new TreeNode(p[i]);
            temp=temp->right;
        }
        return n;
    }
};