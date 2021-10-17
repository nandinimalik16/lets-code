//Print longest common subsequence between two strings
//using topdown approch
//parent question:lcs

#include<iostream>
#include<algorithm>
using namespace std;

string lcs(string x,string y,int n,int m)
{
	int t[n+1][m+1],i,j;
	string p="";
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
	i=n;
	j=m;
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
		{
			p=p+x[i-1];
			i--;
			j--;
		}
		else
		{
			if(t[i-1][j]>t[i][j-1])
			{
				i--;
			}
			else
			{
				j--;
			}
		}
	}
	reverse(p.begin(),p.end());
	
	return p;
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
	string l=lcs(x,y,n,m);
	cout<<"Longest common string="<<l;

	return 0;
}
