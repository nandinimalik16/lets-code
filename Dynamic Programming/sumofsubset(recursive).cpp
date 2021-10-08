#include<iostream>
using namespace std;
bool subsum(int arr[],int sum,int n)
{

	if(sum<0)
	return false;
	
	if(sum==0)
	{
		return true;
	}
	if(n==0)
	{
		return false;
	}
	
	if(sum>=arr[n-1])
	{
	
		return  subsum(arr,sum,n-1)|| subsum(arr,sum-arr[n-1],n-1) ;
	}
	if(sum<arr[n-1])
	{
		return subsum(arr,sum,n-1);
	}
	
}
int main()
{
	int n;
	cout<<"enter the size:";
	cin>>n;
	int arr[n],sum;
	cout<<"enter elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i]	;
	}
	cout<<"\nEnter required sum=";
	cin>>sum;
	
	if(subsum(arr,sum,n)==1)
	{
		cout<<"subset found";
	}
	else
	{
		cout<<"not found";
	}
	return 0;
}
