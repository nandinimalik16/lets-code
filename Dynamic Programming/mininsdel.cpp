//Minimum Number of insertion and deletions required to convert "a"-->> to "b"
//top-down approach


#include<iostream>
#include<vector>
using namespace std;

vector<int> minlcs(string x,string y,int n,int m)
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
	vector<int>mp;
	if(t[n][m]==m)
	{
		mp.push_back(n-m);
		mp.push_back(0);
		
		
	}
	else if(t[n][m]<m)
	{
		mp.push_back(n-t[n][m]);
		mp.push_back(m-t[n][m]);
		
	}
	else
	{
		mp.push_back(0);
		mp.push_back(0);
		
	}
    return mp;
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
	vector<int> l;
	l=minlcs(x,y,n,m);
	cout<<"Number of deletions="<<l[0]<<endl;
	cout<<"Number of insertions="<<l[1];

	return 0;
}