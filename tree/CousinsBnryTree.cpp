// Cousins in Binary Tree
// https://leetcode.com/problems/cousins-in-binary-tree/

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
    int find_height(TreeNode *root,int &parent,int v,int h)
    {
        int p=h;
        if(!root)
        {
            return 0;
        }
        parent=root->val;
        int l=find_height(root->left,parent,v,h+1);
        if(l)
        {
            return l;
        }
        parent=root->val;
        h=p;
        int r=find_height(root->right,parent,v,h+1);
        
            return r;
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int xp=-1;
        int xheight=find_height(root,xp,x,0);
        int yp=-1;
        int yheight=find_height(root,yp,y,0);
        if(xp!=yp && xheight==yheight)
        {
            return true;
        }
        return false;
        
    }
};