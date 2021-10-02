//Longest Palindrome in a string
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int mxlen=1,i,j;
	for(i=0;i<str.length();i++)
	{
	
		for(j=i+1;j<str.length();j++)
		{
			string str1,str2;
			str1=str.substr(i,j+1);
			
			str2=str1;
			reverse(str1.begin(),str1.end());
			if(str1==str2 && str1.length()>mxlen)
			{
				mxlen=str1.length();
			}
		}
	}
	cout<<"maxlen="<<mxlen;
	return 0;
}