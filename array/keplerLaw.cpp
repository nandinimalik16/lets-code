// Kepler's Law
// https://www.codechef.com/JAN221C/problems/KEPLERSLAW


#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    float t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    t1=pow(t1,2);
	    t2=pow(t2,2);
	    r1=pow(r1,3);
	    r2=pow(r2,3);
	    
	    
	    if(t1/r1==t2/r2)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
