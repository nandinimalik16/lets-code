//0-1 Knapsack problem
//using recursive approach

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
	cout<<"Enter wights and profits........";
	for(int i=1;i<=n;i++)
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
	if(n==0||w==0)
	{
		return 0;
	}
	if(wt[n]<=w)
	{
		return max(pf[n]+knapsack(wt,pf,w-wt[n],n-1),knapsack(wt,pf,w,n-1));
	}
	else
	{
		return knapsack(wt,pf,w,n-1);
	}
	
}