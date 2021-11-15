// Largest Divisible subset
// https://leetcode.com/problems/largest-divisible-subset/


class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>dp(n,1);
        vector<int>child(n,-1);
        
        int mx=0;
        for(int i=1;i<n;i++)
        {
            
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0)
                {
                    if(dp[j]+1>dp[i])
                    {
                        dp[i]=dp[j]+1;
                        child[i]=j;
                    }
                }
            }
            if(dp[i]>dp[mx])
            {
                mx=i;
            }
        }
        vector<int>ans;
        while(mx!=-1)
        {
            ans.push_back(nums[mx]);
            mx=child[mx];
        }
return ans;         
    }
};