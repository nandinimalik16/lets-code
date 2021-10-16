//Length of longest common subsequence
// using memoization


#include<iostream>
#include<cstring>
using namespace std;
int t[1001][1001];

int lcs(string x,string y,int n,int m)
{
	if(n==0||m==0)
	{
		return t[n][m]= 0;
	}
	if(t[n][m]!=-1)
	{
		return t[n][m];
	}
	if(x[n-1]==y[m-1])
	{
		return t[n][m]=1+lcs(x,y,n-1,m-1);
	}
	else
	{
		return t[n][m]=max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
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
	memset(t,-1,sizeof(t));
	n=x.length();
	m=y.length();
	int l=lcs(x,y,n,m);
	cout<<"Length of longest common subsequence="<<l;
	
	return 0;
}