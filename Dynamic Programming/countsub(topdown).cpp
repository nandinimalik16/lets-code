//Count of Subsets Sum = X 
// using top down approach


#include<iostream>
using namespace std;

int countsub(int arr[],int n,int sum)
{
	int t[n+1][sum+1],i,j;
	if(sum==0)
	{
		return 1;
	}
	
	for(i=0;i<=n;i++)
	{
		t[i][0]=1;
	}
	for(i=1;i<sum+1;i++)
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
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<sum+1;j++)
		{
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return t[n][sum];
	
}

int main()
{
	
	int n;
	cin>>n;
	int arr[n],i,sum;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	
		
	}
	cout<<"Enter Sum=";
	cin>>sum;
	int x=countsub(arr,n,sum);
	cout<<"Count="<<x;
	
	return 0;
}
