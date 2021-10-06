//Find All Duplicates in an Array
//https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>a;
        for(auto it:mp)
        {
            if(it.second==2)
            {
                a.push_back(it.first);
            }
        }
        return a;
    }
};