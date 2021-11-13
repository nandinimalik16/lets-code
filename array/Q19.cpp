// 132-pattern
// https://leetcode.com/problems/132-pattern/
//Related Topics-  array, binary search, stack, ordered set, monotonic stack


class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int l=nums.size()   ;
        int minl[l];
        minl[0]=nums[0];
        stack<int>stk;
        for(int i=1;i<l;i++)
        {
            minl[i]=min(minl[i-1],nums[i]);
            
        }
        for(int i=l-1;i>=0;i--)
        {
            if(nums[i]>minl[i])
            {
                while(!stk.empty() && stk.top()<=minl[i])
                {
                    stk.pop();
                }
                if(!stk.empty()&& stk.top()<nums[i])
                {
                    
                    return true;
                }
                stk.push(nums[i]);
            }
            
        }
        return false;
    }
};
