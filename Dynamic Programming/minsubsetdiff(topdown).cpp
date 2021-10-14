//Minimum Subset Difference
//using top down approach
//approach similar to sum of subset and equal sum partition


#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int mindiff(int arr[],int n,int sum)
{
	int minm=INT_MAX,i,j;
	bool t[n+1][sum+1];
	for(i=0;i<=n;i++)
	{
		t[i][0]=true;
	}
	for(i=1;i<=sum;i++)
	{
		t[0][i]=false;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(j>=arr[i-1])
			{
				t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
			}
			else
			t[i][j]=t[i-1][j];
		}
	}
	vector<int> mp;
	for(i=0;i<=sum/2;i++)
	{
		if(t[n][i]==true)
		mp.push_back(i);
	}
	for(i=0;i<mp.size();i++)
	{
		
		minm=min(minm,sum-2*mp[i]);
	}
	
		
	
	
	
	return minm;
	
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
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int x= mindiff( arr, n,sum);
	cout<<"min diff="<<x;
	return 0;
}