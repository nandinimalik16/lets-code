//Matrix chain multiplication
//recursive solution


#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

int solve(int arr[],int i,int j)
{
	if(i==j)
	{
		return 0;
	}
	int mn=INT_MAX;
	int k,temp;
	for(k=i;k<=j-1;k++)
	{
		int x,y;
		
		temp=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
		
		if(temp<mn )
		{
			mn=temp;
		}
		
	}
	
	return mn;
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
	int x=solve(arr,1,n-1);
	cout<<"Minimum cost="<<x;
	
	return 0;
}