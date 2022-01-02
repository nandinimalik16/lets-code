// ciel and receipt
// https://www.codechef.com/problems/CIELRCPT


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    
	    int p;
	    cin>>p;
	    //cout<<p;
	    int iprice=2048,ans=0;
	    while(p>0)
	    {
	        ans+=p/iprice;
	        p=p%iprice;
	        iprice/=2;
	    }
	    cout<<ans<<endl;;
	    t--;
	}
	return 0;
}
