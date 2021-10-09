//Equal Sum Partition using recursion

#include<iostream>
using namespace std;

bool equalSum(int arr[],int n,int sum)
{
	if(sum==0)
	{
		return true;
	}
	if(n==0 && sum!=0)
	{
		return false;
	}
	if(sum>=arr[n-1])
	{
		
		return equalSum(arr,n-1,sum)||equalSum(arr,n-1,sum-arr[n-1]);
	}
	else
	{
	
	return equalSum(arr,n-1,sum);
	
}
}

int main()
{
	int n;
	cin>>n;
	int arr[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	
		
	}
	for(i=0;i<n;i++)
	{
			sum+=arr[i];
	}

	if(sum%2!=0)
	{
		cout<<"equal sum Subset does not exist";
		return 0;
	}
	bool x=equalSum(arr,n,sum/2);
	
	if(x==true)
	{
		cout<<"equal sum subset exists";
	}
	else
	{
		cout<<"equal sum Subset does not exist";
	}
	return 0;
	
}