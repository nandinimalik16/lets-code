// Find the Difference
// https://leetcode.com/problems/find-the-difference/



class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char ch;
        ch=t[t.size()-1];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                ch=t[i];
                break;
            }
        }
        return ch;
    }
};