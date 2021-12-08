// Univalued Binary Tree
// https://leetcode.com/problems/univalued-binary-tree/

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
    bool check(TreeNode *root,int v)
    {
        if(!root)
        {
            return true;
        }
        if(root->val!=v)
        {
            return false;
        }
        return check(root->left,v)&&check(root->right,v);
    }
    bool isUnivalTree(TreeNode* root) {
        return check(root,root->val);
    }
};