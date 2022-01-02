// ID and Ship
// https://www.codechef.com/problems/FLOW010

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t)
	{
	    char ch;
	    cin>>ch;
	    switch(ch)
	    {
	        case 'B': cout<<"BattleShip";
	        break;
	        case 'b': cout<<"BattleShip";
	        break;
	        case 'C':cout<<"Cruiser";
	        break;
	        case 'c':cout<<"Cruiser";
	        break;
	        case 'd':cout<<"Destroyer";
	        break;
	        case 'D':cout<<"Destroyer";
	        break;
	        case 'F': cout<<"Frigate";
	        break;
	        case 'f': cout<<"Frigate";
	        break;
	        
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
