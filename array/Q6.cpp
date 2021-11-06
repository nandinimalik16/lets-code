//Single Number III
//https://leetcode.com/problems/single-number-iii/


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x:mp)
        {
            
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};