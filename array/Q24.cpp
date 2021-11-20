// Single Element in a sorted array
// https://leetcode.com/problems/single-element-in-a-sorted-array/


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans;
        for(auto it:m)
        {
            if(it.second==1)
            {
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};