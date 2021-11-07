//Array Partition I
// https://leetcode.com/problems/array-partition-i/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int sum=0;
        while(i<nums.size()-1)
        {
            sum+=nums[i];
            i+=2;
        }
        return sum;
    }
};