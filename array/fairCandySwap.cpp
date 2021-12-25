// Fair Candy Swap
// https://leetcode.com/problems/fair-candy-swap/

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        int asum=accumulate(a.begin(),a.end(),0);
        int bsum=accumulate(b.begin(),b.end(),0);
        
        int diff=(asum-bsum)/2;
        set<int>aset;
        for(auto it:a)
        {
            aset.insert(it);
        }
        vector<int> ans;
        for(auto it:b)
        {
            if(aset.count(diff+it)>0)
            {
                ans.push_back(diff+it);
                ans.push_back(it);
                break;
            }
        }
        return ans;
    }
};