// Maximize Sum Of Array After K Negations
// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/


class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n=nums.size();
        
        while(k>0)
        {
            sort(nums.begin(),nums.end());
            nums[0]*=-1;
            k--;
        }
        return accumulate(nums.begin(),nums.end(),0);
    }
};