/*
Coin Change II: minimum number of coins
variation of unbounded knapsack
using topdown approach
*/

#include<iostream>
#include<limits>
using namespace std;

int coinchangeII(int coin[],int n,int sum)
{
	int t[n+1][sum+1],i,j;
	for(i=0;i<=sum;i++)
	{
		t[0][i]=INT_MAX-1;
	}
	for(i=1;i<=n;i++)
	{
		t[i][0]=0;
	}
	for(i=1;i<=sum;i++)
	{
		if(i%coin[0]==0)
		{
			t[1][i]=i/coin[0];
		}
		else
		{
			t[1][i]=INT_MAX-1;
		}
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(j>=coin[i-1])
			{
				t[i][j]=min(t[i-1][j],t[i][j-coin[i-1]]+1);
			}
			else
			{
				t[i][j]=t[i-1][j];
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=sum;j++)
		{
			cout<<t[i][j]<<"\t";
		}
		cout<<endl;
		
	}
	return t[n][sum];
}

int main()
{
	int n;
	cout<<"Enter size=";
	cin>>n;
	int coin[n],i,sum;
	cout<<"Enter the coins=";
	for(i=0;i<n;i++)
	{
		cin>>coin[i];
	}
	cout<<"Enter the desired sum=";
	cin>>sum;
	int x=coinchangeII(coin,n,sum);
	cout<<"Minimum number of coins required="<<x;
	return 0;
}