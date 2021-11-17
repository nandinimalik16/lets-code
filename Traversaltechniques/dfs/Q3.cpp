// Flood Fill
// https://leetcode.com/problems/flood-fill/submissions/


class Solution {
public:
    void checkim(int i, int j, vector<vector<int>>&im,int n,int o)
    {
        if(i<0||i>=im.size()||j<0||j>=im[0].size()||im[i][j]!=o)
        {
            return;
        }
        im[i][j]=n;
        checkim(i+1,j,im,n,o);
        checkim(i,j+1,im,n,o);
        checkim(i-1,j,im,n,o);
        checkim(i,j-1,im,n,o);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int newColor) {
        int oldcol;
        if(im[sr][sc]==newColor)
        {
            return im;
        }
        oldcol=im[sr][sc];
        checkim(sr,sc,im,newColor,oldcol);
        return im;
    }
};
