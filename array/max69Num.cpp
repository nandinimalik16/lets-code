// Maximum 69 Number
// https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int n) {
        vector<int>ans;
        while(n>0)
        {
            int r=n%10;
            ans.push_back(r);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==6)
            {
                ans[i]=9;
                break;
            }
        }
        n=0;
        int i=0;
        while(i<ans.size())
        {
            n=n*10+ans[i];
            i++;
        }
        return n;
    }
};