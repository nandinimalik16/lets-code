// Max area of Island
// https://leetcode.com/problems/max-area-of-island/


class Solution {
public:
    int check(int i,int j,vector<vector<int>>&g)
    {
        if(i<0||j<0||i>=g.size()||j>=g[0].size()||g[i][j]==0)
        {
            return 0;
        }
        int a=g[i][j];
        g[i][j]=0;
        return a+check(i+1,j,g)+check(i,j+1,g)+check(i-1,j,g)+check(i,j-1,g);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ar=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                ar=max(ar,check(i,j,grid));
            }
        }
        return ar;
        
    }
};
