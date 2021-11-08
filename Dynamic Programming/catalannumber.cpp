//Catalan Number
// https://leetcode.com/problems/unique-binary-search-trees/

class Solution {
public:
    int catalan(int n)
    {
        int cata[n+1];
        cata[0]=cata[1]=1;
        for(int i=2;i<=n;i++)
        {
            cata[i]=0;
            for(int j=0;j<i;j++)
            {
                cata[i]+=cata[j]*cata[i-j-1];
            }
        }
        return cata[n];
    }
    
    int numTrees(int n) {
        return catalan(n);
        
        
    }
};