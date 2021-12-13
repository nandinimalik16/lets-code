// Remove Duplicate Letters
// https://leetcode.com/problems/remove-duplicate-letters/submissions/


class Solution {
public:
    string removeDuplicateLetters(string s) {
         ios_base::sync_with_stdio(false);
        
        unordered_map<char,int> freq;
        unordered_map<char ,bool> visited;  
        string res;
        
        // storing all char frequency in freq
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]]++;
        }
        
        // MAIN LOOP
        
        
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]]--; // as I have to store only 1 occurrence of char
            
            if(visited[s[i]]) continue; // if already Visited then ,I already process it
            
            // checking eligibility for every unique chars
            
            while(res.empty() == false && res.back() > s[i] && freq[res.back()] > 0 )
            {
                visited[res.back()] =false; // not visited
                res.pop_back();
            }
            
            visited[s[i]] =true;
            res+=s[i];
            
                      
        }
        
        return res;
        
    }
};