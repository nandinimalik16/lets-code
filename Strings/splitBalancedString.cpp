// Split a string in balanced strings
// https://leetcode.com/problems/split-a-string-in-balanced-strings/


class Solution {
public:
    int balancedStringSplit(string s) {
        int len=s.length();
        int ct=0,ans=0,rt=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='L')
            {
                if(ct+1==rt )
                {
                    ct=0;
                    rt=0;
                    ans++;
                    
                }
                else
                {
                    ct++;
                }
            }
            else if(s[i]=='R')
            {
                if(ct==rt+1)
                {
                    ct=0;
                    rt=0;
                    
                    ans++;   
                    
                }
                else
                    rt++;
            }
        }
        return ans;
    }
};