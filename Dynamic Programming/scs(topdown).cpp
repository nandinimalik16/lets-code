//Length of shortest common supersequence
//top down approach

/*
Input:   str1 = "geek",  str2 = "eke"
Output: 5
Explanation: 
String "geeke" has both string "geek" 
and "eke" as subsequences.

Input:   str1 = "AGGTAB",  str2 = "GXTXAYB"
Output:  9
Explanation: 
String "AGXGTXAYB" has both string 
"AGGTAB" and "GXTXAYB" as subsequences.
*/

#include<iostream>
using namespace std;

int shortlcs(string x,string y,int n,int m)
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
	return m+n-t[n][m];
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
	int l=shortlcs(x,y,n,m);
	cout<<"Length of shortest common supersequence="<<l;

	return 0;
}