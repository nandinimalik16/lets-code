// Two Sum II
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/
//Related Topics- array, two pointers

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int len=num.size();
        int i=0,j=len-1;
        while(i<j)
        {
            int sum=num[i]+num[j];
            if(sum==t)
            {
                return {i+1,j+1};
            }
            else if(sum<t)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {};
    }
};