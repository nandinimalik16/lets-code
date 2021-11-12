//3Sum Closest
//https://leetcode.com/problems/3sum-closest/submissions/

//Related Topics: Sorting , array, greedy method

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum;
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                int s=nums[i]+nums[l]+nums[r];
                if(abs(s-target)<m)
                {
                    m=abs(s-target);
                    sum=s;
                }
                if(s<target)
                {
                    l++;
                    
                }
                else if(s>target)
                {
                    r--;
                }
                else if(s==target)
                {
                    return s;
                }
            }
        }
        return sum;
        return 0;
    }
};