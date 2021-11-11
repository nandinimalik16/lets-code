// Minimum value to get positive step by step sum
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/submissions/



class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                m+=nums[i];
            }
        }
        int l=-1*m+1;
        while(l>0)
        {
            int sum=l,ct=0;
            for(int i=0;i<nums.size();i++)
            {
                sum+=nums[i];
                if(sum<1)
                {
                    ct=1;
                    break;
                }
            }
            if(ct==1)
            {
                l++;
                break;
            }
            if(l==1)
                break;
            l--;
        }
        return l;
    }
};