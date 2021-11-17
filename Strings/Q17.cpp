class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,start=0,i;
        vector<int>p(256,-1);//a string can have 256 types of characters and in this array each 
        //index is initialised with value=-1;
        int n=s.length();
        for(i=0;i<n;i++)
        {
            if(p[s[i]]==-1)
            {
                p[s[i]]=i;
            }
            else
            {
                
                start=max(start,p[s[i]]+1);
                p[s[i]]=i;
            }
            ans=max(ans,i-start+1);
        }
        
    return ans;
    }
};
