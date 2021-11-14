// Shortest unsorted continuous Subarray
// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int len=nums.size();
        vector<int>num2(len,0);
        if(len<2)
            return 0;
        for(int i=0;i<len;i++)
        {
            num2[i]=nums[i];
        }
        sort(num2.begin(),num2.end());
        int low=INT_MAX,high=INT_MIN,ct=0;
        for(int i=0;i<len;i++)
        {
            if(num2[i]!=nums[i])
            {
                low=min(i,low);
                high=max(i,high);
                ct=1;
            }
        }
        if(ct==1)
        {
            return high-low+1;
        }
        return 0;
    }
};