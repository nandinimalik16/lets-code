//print all the duplicates of the string
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	map<char,int>mp;
	for(int i=0;i<str.length();i++)
	{
		mp[str[i]]++;
	}
	for(auto it:mp)
	{
		if(it.second>1)
		{
			cout<<it.first<<"="<<it.second<<endl;
		}
	}
	return 0;

}