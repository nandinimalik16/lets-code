// Small number of notes
// https://www.codechef.com/problems/FLOW005


#include <iostream>
//#include<bits/stdc++>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int n;
	    cin>>n;
	    vector<int >p={100,50,10,5,2,1};
	    int ans=0;
	    for(int i=0;i<6;i++)
	    {
	        ans+=n/p[i];
	        n=n%p[i];
	    }
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}
