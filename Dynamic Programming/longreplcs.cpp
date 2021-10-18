//Largest repeating subsequence
//top-down approach


#include<iostream>
using namespace std;

int longlcs(string x,string y,int n)
{
	int t[n+1][n+1],i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			t[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1] )
			{
				if(i!=j)
				{
					t[i][j]=1+t[i-1][j-1];
				}
				else
				{
					t[i][j]=max(t[i][j-1],t[i-1][j]);
				}
			}
			else
			{
				t[i][j]=max(t[i][j-1],t[i-1][j]);
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return t[n][n];
}


int main ()
{	
	string x,y;
	int n;
	cout<<"Enter string1=";
	cin>>x;
	y=x;
	n=x.length();	
	int l=longlcs(x,y,n);
	cout<<"Longest repeating subsequence="<<l;
}