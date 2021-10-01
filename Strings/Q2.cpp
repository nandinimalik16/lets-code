//Check whether a string is a palindrome or not
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    int i;
    cin>>str;
    string str2;
    str2=str;
	reverse(str.begin(),str.end());
	
	cout<<str<<endl;
    if(str2==str)
    cout<<"String is a palindrome";
    else
    cout<<"not a palindrome";
    return 0;

}