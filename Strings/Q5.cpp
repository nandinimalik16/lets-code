//Check if a string is a valid shuffle of two distinct strings
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str1,str2,str3,str4,str5;
	cout<<"enter string1:";
	cin>>str1;
	cout<<"\nenter string2:";
	cin>>str2;
	cout<<"\nenter string3:";
	cin>>str3;
	str4=str1+str2;
	int len1=str4.length();
	int len2=str3.length();
	if(len1!=len2)
	{
		cout<<"not a shuffle";
		return 0;
	}
	sort(str4.begin(),str4.end());
	str5=str3;
	sort(str3.begin(),str3.end());
	if(str4==str3)
	cout<<str5<<" is a shuffle of "<<str1<< " and "<<str2;
	else
	cout<<"not a shuffle";

	
	return 0;

}