// Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/
// Related Topics- array, stack, maths


class Solution {
public:
    int evalRPN(vector<string>& t) {
        int len=t.size();
        stack<int>stk;
        for(int i=0;i<len;i++)
        {
            if(t[i]=="+")
            {
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b+a);
            }
            else if(t[i]=="*")
            {
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b*a);
            }
            else if(t[i]=="/")
            {
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b/a);
            }
            else if(t[i]=="-")
            {
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b-a);
            }
            else
            {
                stk.push(stoi(t[i]));
            }
            
        }
        return stk.top();
        
    }
};