// Leaf-Similar Tree
// https://leetcode.com/problems/leaf-similar-trees/

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
    void ass(TreeNode*root,vector<int>&v)
    {
        if(!root)return;
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->val);
        }
        ass(root->left,v);
        ass(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        ass(root1,v1);
        ass(root2,v2);
        if(v1.size()==v2.size())
        {
            for(int i=0;i<v1.size();i++)
            {
                if(v1[i]!=v2[i])
                {
                    return false;
                }
            }
        }
        else
            return false;
        return true;
    }
};