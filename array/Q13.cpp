//Trapping Rain water
//Problem similar to Q12
// https://leetcode.com/problems/trapping-rain-water/

//related topics- array,dynamic programming,stack,two-pointers,monotonic stack

class Solution {
public:
    int trap(vector<int>& h) {
        int l=0,r=h.size()-1,lm=0,rm=0,result=0;
        while(l<r)
        {
            rm=max(rm,h[r]);
            result+=rm-h[r];
            lm=max(lm,h[l]);
            result+=lm-h[l];
            if(h[l]<=h[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return result;
    }
};