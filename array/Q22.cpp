// Maximum Binary Tree
//https://leetcode.com/problems/maximum-binary-tree/
//Rekated Topics- array, stack, divide and conquer, binary tree



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
    int findInd(vector<int>&nums,int l, int r)
    {
        int m=INT_MIN,ind;
        for(int i=l;i<=r;i++)
        {
            if(m<nums[i])
            {
                m=nums[i];
                ind=i;
            }
        }
        return ind;
    }
    TreeNode* construct(vector<int>&nums,int l,int r)
    {
        if(l>r)
        {
            return NULL;
        }
        int ind=findInd(nums,l,r);
        TreeNode* root=new TreeNode(nums[ind]);
        root->left=construct(nums,l,ind-1);
        root->right=construct(nums,ind+1,r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size()-1);
    }
};
