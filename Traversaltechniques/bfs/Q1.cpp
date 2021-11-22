// 01 matrix
// https://leetcode.com/problems/01-matrix/



class Solution {
public:
    bool isvalid(pair<int,int> i,int n,int m)
    {
        if(i.first>=n||i.first<0||i.second<0||i.second>=m)
        {
            return false;
        }
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>dist(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        while(!q.empty())
        {
            pair<int,int> node=q.front();
            q.pop();
            for(int t=0;t<4;t++ )
            {
                pair<int,int> nbour={node.first+dx[t],node.second+dy[t]};
                if(isvalid(nbour,n,m)&& dist[nbour.first][nbour.second]==-1)
                {
                    dist[nbour.first][nbour.second]=dist[node.first][node.second]+1;
                    q.push({nbour.first,nbour.second});
                }
            }
            
        }
        return dist;
    }
};