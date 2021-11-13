// Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int len=temp.size();
        vector<int>ans(len,0);
        stack<int>stk;
        for(int i=len-1;i>=0;i--)
        {
            while(!stk.empty() && temp[i]>=temp[stk.top()])
            {
                stk.pop();
            }
            if(!stk.empty() && temp[i]<temp[stk.top()])
            {
                ans[i]=stk.top()-i;
            }
            stk.push(i);
        }
        return ans;
    }
};