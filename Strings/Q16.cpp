// DI-String match
// https://leetcode.com/problems/di-string-match/submissions/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int i=0,j=n;
        vector<int> m;
        for(int k=0;k<=n;k++)
        {
            if(s[k]=='I')
            {
                m.push_back(i);
                i++;
            }
            else if(s[k]=='D')
            {
                m.push_back(j);
                j--;
            }
            else
            {
                m.push_back(i);
            }
        }
        return m;
    }
};