//length of longest common substring
//top-down approach

#include<iostream>
using namespace std;

int lcs(string x,string y,int n,int m)
{
	int t[n+1][m+1],i,j;
	int mx=0;
	for(i=0;i<=n;i++)
	{
		t[i][0]=0;
	}
	for(i=1;i<=m;i++)
	{
		t[0][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(x[i-1]==y[j-1])
			{
				t[i][j]=1+t[i-1][j-1];
				mx=max(mx,t[i][j]);
			}
			else
			{
				t[i][j]=0;
			}
		}
	}
	
	return mx;
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
	cout<<"Length of longest common substring="<<l;

	return 0;
}