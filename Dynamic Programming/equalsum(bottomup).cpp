//Equal Sum Partition using top down approach
#include<iostream>
using namespace std;
bool equalSum(int arr[],int n)
{
	int sum=0,i,j;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int part[n+1][sum/2+1];
	if(sum%2!=0)
	return 0;
	for(i=0;i<=n;i++)
	{
		part[i][0]=true;
	}
	
	for(i=1;i<=sum/2;i++)
	{
		part[0][i]=false;
	}
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<=sum/2;j++)
		{
			
			if(j>=arr[i-1])
			{
				part[i][j]=part[i-1][j] || part[i][j-arr[i-1]];
			}
			else
			part[i][j]=part[i-1][j];
		}
	}
	
	return part[n][sum/2];
}
int main()
{
	int n,i;
	cin>>n;
	cout<<"enter elements";
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	if(equalSum(arr,n)==true)
	{
		cout<<"two equal sum subset exists";
	}
	else
	cout<<"subsets not found";
	return 0;
}