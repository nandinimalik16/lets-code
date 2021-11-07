//can place flowers
// https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int prev,next,ct=0;
        for(int i=0;i<fb.size();i++)
        {
            if(fb[i]==0)
            {
                prev=(i==0 || fb[i-1]==0)?0:1;
                next=(i==fb.size()-1||fb[i+1]==0)?0:1;
                if(prev==0 && next==0)
                {
                    fb[i]=1;
                    ct++;
                }
            }
        }
        if(ct>=n)
        {
            return true;
        }
        return false;
        
    }
};