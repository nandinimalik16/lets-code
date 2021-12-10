// Jump Game IV
// https://leetcode.com/problems/jump-game-iv/


class Solution {
     unordered_map<int, vector<int>> idx;
public:
    int minJumps(vector<int>& arr) {
        for (int i = 0; i < arr.size(); ++i) {
            if (i > 0 && i+1 < arr.size() && arr[i] == arr[i+1] && arr[i] == arr[i-1]) {
                continue;
            }
            idx[arr[i]].push_back(i);
        }
        vector<bool> v(arr.size());
        v[0]=true;
        queue<pair<int,int>>q;
        q.push({0,0});
        int n=arr.size();
        
        while(!q.empty())
        {
            int f=q.front().first;
            int step=q.front().second;
            q.pop();
            if(f==n-1)
            {
                return step;
            }
            // checking  if i-1 case is possible or not
            if(f>0 && !v[f-1])
            {
                v[f-1]=true;
                q.push({f-1,step+1});
            }
            // checking whether i+1 case is possible or not
            if(f+1<n && !v[f+1])
            {
                v[f+1]=true;
                q.push({f+1,step+1});
            }
            // checking for the existense of the more then one same value
            for(auto it:idx[arr[f]])
            {
                if(!v[it])
                {
                    q.push({it,step+1});
                    v[it]=true;
                }
            }
        }
        return -1;
    }
};