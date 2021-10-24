//Kadane's algorithm

#include<iostream>
#include<algorithm>
using namespace std;

int kadane(int arr[],int n)
{
	int mx=arr[0];
	int s=arr[0];
	for(int i=1;i<n;i++)
	{
		if(s+arr[i]>arr[i])
		{
			s+=arr[i];
		}
		else
		{
			s=arr[i];
		}
		mx=max(s,mx);
	}
	return mx;
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
	int x=kadane(arr,n);
	cout<<"max sum="<<x;
	return 0;
}