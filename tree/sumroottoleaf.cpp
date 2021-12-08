// Sum of Root to Leaf Binary Numbers
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

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
    int cal(TreeNode *root,int sum)
    {
        if(!root)
        {
            return 0;
        }
        sum= (sum << 1) + root->val;
        if(!root->left && !root->right)
        {
            return sum;
        }
        return cal(root->left,sum)+cal(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        
        return cal(root,0);
    }
};