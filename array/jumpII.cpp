// Jump II
// https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
        int mxrch=0,curreach=0,jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            mxrch=max(mxrch,i+nums[i]);
            if(i==curreach)
            {
                jump++;
                curreach=mxrch;
                
            }
        }
        return jump;
        
    }
};