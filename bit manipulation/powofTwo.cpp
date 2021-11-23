// Power of Two
// https://leetcode.com/problems/power-of-two/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return false;
        }
        if(n==1)
            return true;
        int r=n;
        
        unordered_map<int,int>m;
        while(n>1)
        {
            if(n%2==0)
            {
                m[2]++;
            }
            n=n/2;
        }
        for(auto it:m)
        {
            if(it.first==2)
            {
                n=pow(it.first,it.second);
            }
        }
        return r==n?true:false;
    }
};