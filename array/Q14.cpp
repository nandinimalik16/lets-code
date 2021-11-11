//Majority count
// https://leetcode.com/problems/majority-element/
//Related Topics- array, divide and conquer, hash table, sorting, counting


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int mx=1,q=nums[0];
        for(auto it:mp)
        {
            if(it.second>mx)
            {
                mx=it.second;
                q=it.first;
            }
            
        }
        return q;
        
    }
};