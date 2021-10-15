/*
Coin Change 1
using top down approach
problem similar to subset sum problem and count number of subset
Note: This problem is a variation of unbounded knapsack.
Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins,
how many ways can we make the change? The order of coins doesn’t matter.
For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}.
So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}.
So the output should be 5.
*/

#include<iostream>
using namespace std; 

int coinchange(int coin[],int n,int sum)
{
	int t[n+1][sum+1],i,j;
	for(i=0;i<=n;i++)
	{
		t[i][0]=1;
	}
	for(i=1;i<=sum;i++)
	{
		t[0][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(j>=coin[i-1])
			{
				t[i][j]=t[i-1][j]+t[i][j-coin[i-1]];
			}
			else
			{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][sum];
}

int main()
{
	int n;
	cout<<"enter size=";
	cin>>n;
	int coin[n],sum,i;
	cout<<"enter coins:";
	for(i=0;i<n;i++)
	{
		cin>>coin[i];
	}
	cout<<"enter the required sum=";
	cin>>sum;
	int x=coinchange( coin, n, sum);
	cout<<"Number of subsets="<<x;
	return 0;
}
