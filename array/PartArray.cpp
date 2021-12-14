// Partition arrray into three equal parts
// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/submissions/


class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0)
        {
            return false;
        }
        sum=sum/3;
        cout<<sum;
        int ct=0;
        int s=0;
        for(int i=0;i<arr.size();i++)
        {
            s+=arr[i];
            if(s==sum)
            {
                if(ct==2 && i!=arr.size()-1)
                {
                    continue;
                }
                s=0;
                ct++;
            }
            
        }
        if(ct==3)
            return true;
        return false;
    }
};