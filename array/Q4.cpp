// Get Maximum in Generated Array
//https://leetcode.com/problems/get-maximum-in-generated-array/


class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>mp;
        mp.push_back(0);
        mp.push_back(1);
        int arr[n+2];
        arr[0]=0;
        arr[1]=1;
        for(int i=1;i<=n/2;i++)
        {
            
                arr[2*i]=arr[i];
                mp.push_back(arr[2*i]);
            if(2*i+1<=n )
            { arr[2*i+1]=arr[i]+arr[i+1];
                mp.push_back(arr[2*i+1]);
            }
            
        }
        sort(mp.begin(),mp.end());
        return mp[n];
    }
};