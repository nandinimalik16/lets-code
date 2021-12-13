// Gas Station
// https://leetcode.com/problems/gas-station/


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tgas=accumulate(gas.begin(),gas.end(),0);
        int tcost=accumulate(cost.begin(),cost.end(),0);
        if(tgas<tcost)return -1;
        int ans=0,st=0;
        for(int i=0;i<gas.size();i++)
        {
            st+=gas[i]-cost[i];
            if(st<0)
            {
                st=0;
                ans=i+1;
            }
        }
        return ans;
    }
};