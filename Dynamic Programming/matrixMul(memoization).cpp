//Matrix Chain Multiplication

//Memoization


#include<iostream>
#include<cstring>
#include<limits>
#include<algorithm>
using namespace std;

int dp[100][100];
int solve(int arr[],int i, int j)
{
	if(i==j)
	{
		return 0;
	}
	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	dp[i][j]=INT_MAX;
	for(int k=i;k<j;k++)
	{
		dp[i][j]=min(dp[i][j],solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
	}
	return dp[i][j];
}


int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	memset(dp,-1,sizeof(dp));
	int x=solve(arr,1,n-1);
	cout<<"Minimum cost="<<x;
	return 0;
}