//Count The Number of Subset with a given difference
//Using top down approach
//problem similar to "count number of subset"
//lat an array has two subsets "s1" and "s2"
//and we have to count the number of subsets whose difference =diff
//s1-s2=diff
//s1+s2=sum(sum of the elements of array)
//2s1=diff+sum
//s1=(diff+sum)/2

#include<iostream>
using namespace std;

int countDiff(int arr[],int n,int sm)
{
	int t[n+1][sm+1],i,j;
	for(i=0;i<=n;i++)
	{
		t[i][0]=1;
	}
	for(i=1;i<=sm;i++)
	{
		t[0][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sm;j++)
		{
			if(j>=arr[i-1])
			{
				t[i][j]=t[i-1][j] +t[i-1][j-arr[i-1]];
			}
			else
			{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][sm];
}

int main()
{
	int n;
	cin>>n;
	int arr[n],diff,sum=0,i;
	cout<<"Enter difference:";
	cin>>diff;
	cout<<"Enter elements........\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int sm=(diff+sum)/2;
	int x=countDiff(arr,n,sm);
	cout<<"number of subsets="<<x;
	return 0;
}