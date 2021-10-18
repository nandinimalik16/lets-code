//Sequence pattern matching
//using top down approach


#include<iostream>
#include<algorithm>
using namespace std;

bool spm(string x,string y,int n,int m)
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
		}               // let x=axy and y ahjxjkjy so we see that length of subsequence is equal to the length of one of the string and that string is also the longest common subsequence
	}
	int mi=min(n,m);
	if(t[n][m]==mi)
	return true;
	else
	return false;
	
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
	if(spm(x,y,n,m)==true)
	cout<<"One of the string is a sequence of other";
	else
	cout<<"not a subsequence";
	

	return 0;
}