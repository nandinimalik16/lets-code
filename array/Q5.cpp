//Arranging coins
// https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n) {
     int i=1;
        int count=0;
        while(n>0 && n>=i)
        {
            count++;
            n=n-i;
            i++;
        }
        return count;
    }
};