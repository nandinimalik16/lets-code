/*

Given: An array with elements and a target sum we are to achieve

Conditions:

    We are allowed to either add or subtract elements with one another
    Can use + or – with the existing sum to achieve our target.*/
//problem is same as "count the number of subset with a given difference"
//using topdown approach

#include<iostream>
using namespace std;

int targetSum(int arr[],int n,int sum)
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
			if(j>=arr[i-1])
			{
				t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
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
	cout<<"Enter size=";
	cin>>n;
	int arr[n],i,sum1,sum2;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Target sum wanted=";
	cin>>sum1;
	sum2=0;
	for(i=0;i<n;i++)
	{
		sum2+=arr[i];
	}
	int sm=(sum1+sum2)/2;
	int x=targetSum(arr,n,sm);
	cout<<"No. of ways in which target fum can be achieved="<<x;
	
	
	return 0;
}