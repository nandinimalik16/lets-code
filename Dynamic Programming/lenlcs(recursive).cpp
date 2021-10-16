/*
Length of longest common subsequence
recursive approach
*/

#include<iostream>
using namespace std;

int lcs(string x,string y,int n,int m)
{
    //base condition
	if(n==0||m==0)
	{
		return 0;
	}
    //if the string element matches
	if(x[n-1]==y[m-1])
	{
		return 1+lcs(x,y,n-1,m-1);
	}
    //when the elements are not same->>> we take two cases
    // 1.when the length of string1 is reduced by 1
    //2.when the length of string2 is reduced by 1
    //since we want the length of longest subsequence therefore we take the maximum of both the cases
	else
	{
		return max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
	}
}

int main()
{
	string x,y;
	int n,m;
	cout<<"Enter string1=";
	cin>>x;
	cout<<"Enter string2=";
	cin>>y;
	n=x.length();
	m=y.length();
	int l=lcs(x,y,n,m);
	cout<<"Length of longest common subsequence="<<l;
	
	return 0;
}