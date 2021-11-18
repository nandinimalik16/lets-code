// Find all numbers disappeared in an array
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(i+1!=nums[i])
            {
                int idx=nums[i]-1;
                if(i==idx||nums[i]==nums[idx])
                {
                    i++;
                }
                else
                {
                    swap(nums[i],nums[idx]);
                }
            }
            else
            {
                i++;
            }
        }
        i=0;
        vector<int>ans;
        while(i<n)
        {
            if(i+1!=nums[i])
            {
                ans.push_back(i+1);
            }
            i++;
        }
        return ans;
    }
};