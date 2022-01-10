// Median of two sorted arrays
// https://leetcode.com/problems/median-of-two-sorted-arrays/


// Solution 1:

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            mp[nums2[i]]++;
        }
        vector<int> a;
        for(auto it:mp)
        {
            while(it.second)
            {
                a.push_back(it.first);
                it.second--;
            }
        }
        double ans;
        int n=a.size();
        if(n%2==0)
        {
            
            ans=a[(n-1)/2]+a[(n)/2];
            ans/=2;
            
        }
        else
            ans=a[n/2];
        return ans;
    }
};