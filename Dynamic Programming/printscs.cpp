//Print Shortest Common SuperSequence
//top-down approach


#include<iostream>
#include<algorithm>
using namespace std;

string shortlcs(string x,string y,int n,int m)
{
	int t[n+1][m+1],i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
		}
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
	string p="";
	i=n,j=m;
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
		{
			p+=x[i-1];
			i--; 
			j--;
		}
		else if(t[i-1][j]<t[i][j-1])
		{
			p+=y[j-1];
			j--;
		}
		else
		{
			p+=x[i-1];
			i--;
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
	string l=shortlcs(x,y,n,m);
	cout<<"Shortest common supersequence="<<l;

	return 0;
}