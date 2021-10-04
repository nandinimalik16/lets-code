//695. Max Area of Island
//https://leetcode.com/problems/max-area-of-island/

class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&grid,int &count)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=1)
            return;
        grid[i][j]=-1;
        count++;
        dfs(i+1,j,grid,count);
        dfs(i,j+1,grid,count);
        dfs(i-1,j,grid,count);
        dfs(i,j-1,grid,count);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int marea=0;
        for(int i=0;i<grid.size();i++)
        {
            
            for(int j=0;j<grid[0].size();j++)
            {
                int count=0;
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid,count);
                }
                marea=max(marea,count);
            }
                
        }
        return marea;
    }
};