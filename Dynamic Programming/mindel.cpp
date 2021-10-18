//Minimum number of deletions in a string to make it palindrome
//using topdown approach


#include<iostream>
#include<algorithm>
using namespace std;

int lps(string x,string y,int n,int m)
{
	int t[n+1][m+1],i,j;
	
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
				
			}
			else
			{
				t[i][j]=max(t[i-1][j],t[i][j-1]);
			}
		}
	}

	return n-t[n][m];
}

int main()
{
	string x,y;
	int n,m;
	cout<<"Enter string=";
	cin>>x;
	y=x;
	reverse(x.begin(),x.end());
	n=x.length();
	m=y.length();
	int l=lps(x,y,n,m);
	cout<<"Minimum number of deletions in a string to make it palindrome="<<l;

	return 0;
}