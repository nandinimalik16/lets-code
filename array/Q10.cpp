//Lemonade Challenge
// https://leetcode.com/problems/lemonade-change/


class Solution {
public:
    bool lemonadeChange(vector<int>& bill) {
        vector<int>in(3,0);
        for(int i=0;i<bill.size();i++)
        {
            if(bill[i]==5)
            {
                in[0]++;
            }
            else if(bill[i]==10)
            {
                if(in[0]>0)
                {
                    in[0]--;
                    in[1]++;
                }
                else
                    return false;
            }
            else if(bill[i]==20)
            {
                if(in[0]>0&&in[1]>0)
                {
                    in[0]--;
                    in[1]--;
                    in[2]++;
                }
                else if(in[0]>=3)
                {
                    in[0]-=3;
                    in[2]++;
                }
                else
                    return false;
            }
        }
        return true;
    }
};