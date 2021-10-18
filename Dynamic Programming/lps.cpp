//longest palindromic subsequence
//using top down approach
//lps(a)=lcs(a,reverse(a))

#include<iostream>
#include<algorithm>
using namespace std;

int lps(string x,string y,int n)
{
	int t[n+1][m+1],i,j;
	
	for(i=0;i<=n;i++)
	{
		t[0][i]=t[i][0]=0;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
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

	return t[n][n];
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
	
	int l=lps(x,y,n);
	cout<<"Length of longest palindromic subsequence="<<l;

	return 0;
}



