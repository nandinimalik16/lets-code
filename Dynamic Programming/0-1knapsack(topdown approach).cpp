//0-1 Knapsack problem
//using top-down approach

#include<iostream>
#include<algorithm>
using namespace std;
int knapsack(int wt[],int pf[],int w,int n);
int main()
{
	int n;
	cout<<"Enter Size=";
	cin>>n;
	int w,wt[n],pf[n];
	cout<<"Enter Knapsack Capacity:";
	cin>>w;
	cout<<"Enter wights and profits........"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter weight=";
		cin>>wt[i];
		cout<<"Enter profit=";
		cin>>pf[i];
	}
	int x=knapsack(wt,pf,w,n);
	cout<<"profit="<<x;
	return 0;
	
}
int knapsack(int wt[],int pf[],int w,int n)
{
	int t[n+1][w+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<w+1;j++)
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
		}
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<w+1;j++)
		{
			if(wt[i-1]<=j)
			{
				t[i][j]=max(pf[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
				
			}
			else
			{
				t[i][j]=t[i-1][j];
			}
		}
	}
	
	return t[n][w];
}