//Minimum depth of binary tree
/*
https://leetcode.com/problems/minimum-depth-of-binary-tree/

Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path
 from the root node down to the nearest leaf node.
Note: A leaf is a node with no children.
*/

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
    int minDepth(TreeNode* root) {
     if(!root)   
         return 0;
     int t=0;
        //TreeNode *t=root;
        if(root->left==NULL )
            return 1+minDepth(root->right);
        else if (root->right==NULL)
        {
            return 1+minDepth(root->left);
        }
        int l=0,r=0;
        l=minDepth(root->left)+1;
        r=minDepth(root->right)+1;
        return min(l,r);
    }
};