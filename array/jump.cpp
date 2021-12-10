// Jump
// https://leetcode.com/problems/jump-game/


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int closest=n-1,farth=-1;
        for(int i=n-2;i>=0;i--)
        {
            farth=nums[i]+i;
            if(farth>=closest)
            {
                closest=i;
            }
        }
        return closest==0;
    }
};