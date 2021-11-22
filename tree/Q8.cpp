// Rotting Oranges
// https://leetcode.com/problems/rotting-oranges/submissions/


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0,ct=0,s;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)
                {
                    ct++;
                }
            }
        }
        while(!q.empty())
        {
            s=q.size();
            if(ct==0)
            {
                return ans;
            }
            
            while(s--)
            {
                pair<int,int>it=q.front();
                q.pop();
                int i=it.first,j=it.second;
                if(i>0)
                {
                    if(grid[i-1][j]==1)
                    {
                        ct--;
                        grid[i-1][j]=2;
                        q.push({i-1,j});
                    }
                    
                }
                if(j>0)
                {
                    if(grid[i][j-1]==1)
                    {
                        ct--;
                        grid[i][j-1]=2;
                        q.push({i,j-1});
                    }
                    
                }
                if(i<n-1)
                {
                    if(grid[i+1][j]==1)
                    {
                        ct--;
                        grid[i+1][j]=2;
                        q.push({i+1,j});
                    }
                    
                
                }
                if(j<m-1)
                {
                    if(grid[i][j+1]==1)
                    {
                        ct--;
                        grid[i][j+1]=2;
                        q.push({i,j+1});
                    }
                    
                }
            }
            ans++;
        }
        return ct==0?ans:-1;
    }
};