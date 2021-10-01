//A Program to check if strings are rotations of each other or not
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string str1,str2;
	cout<<"enter string1:";
	cin>>str1;
	cout<<"\nenter string2:";
	cin>>str2;
	str1=str1+str1;
	int x=str1.find(str2);
	if(x>=0)
	{
		cout<<"\nstring2 is rotation of string1";
	}
	else
	{
		cout<<"not a rotation";
	}
	
	return 0;

}