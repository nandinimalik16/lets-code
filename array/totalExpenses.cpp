// Total Expenses
// https://www.codechef.com/problems/FLOW009


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t)
    {
        double a,b;
        cin>>a>>b;
        double l;
        l=a*b;
        if(a>1000)
        {
            l=l*(0.9);
        }
        cout<<fixed<<setprecision(6)<<l<<endl;
        t--;
    }
	return 0;
}
