//Count of Subsets Sum = X 
//using recursion

#include<iostream>
using namespace std;

int countsub(int arr[],int n,int i,int sum,int count)
{
	if(i==n)
	{
		if(sum==0)
		{
			count++;
		}
		return count;
	}
	count=countsub(arr,n,i+1,sum-arr[i],count);
	
	
	count=countsub(arr,n,i+1,sum,count);
	
	return count;
	
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
	int count=0;
	int x=countsub(arr,n,0,sum,count);
	cout<<"Count="<<x;
	
	return 0;
}