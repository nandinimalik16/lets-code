//Subarray with given sum 
//Given an unsorted array A of size N that contains only non-negative integers,
// find a continuous sub-array which adds to a given number S.

// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

#include<iostream>
#include<vector>
using namespace std;

vector<int> subsum(int arr[],int n,int sum)
{
	int i,l=1,s=0;
	for(i=1;i<=n;i++)
	{
		if(s<sum)
		{
			s+=arr[i];
		}
		else if(s>sum)
		{
			s-=arr[l];
			l++;
			i--;
		}
		else if(s==sum)
		{
		
			break;
		}
		
	}
	vector<int> m;
	if(s==sum)
	{
		m.push_back(l);
		m.push_back(i);	
	}
	
	return m;
	
}


int main()
{
	int N;
	cin>>N;
	int arr[N],i;
	cout<<"Enter elements:";
	for(i=1;i<=N;i++)
	{
		cin>>arr[i];
	}
	int sum;
	cout<<"Required Sum=";
	cin>>sum;
	vector<int> mp;
	mp=subsum(arr,N,sum);
	if(mp.empty())
	{
		cout<<"sum not found";
	}
	else
	cout<<mp[0]<<" "<<mp[1];
	return 0;
}