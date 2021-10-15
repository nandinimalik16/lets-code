/*Unbounded knapsack(using topdown approach)
Given a knapsack weight W and a set of n items with certain value vali and weight wt[i],
 we need to calculate the maximum amount that could make up this quantity exactly. 
 This is different from classical Knapsack problem, here we are allowed to use unlimited number of instances of an item.
*/


#include<iostream>
using namespace std;

int unboundedknap(int wt[],int pf[],int w,int n)
{
	int t[n+1][w+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(j>=wt[i-1])
			{
				t[i][j]=max(pf[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
			}
			else
			{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][w];
}

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
	int profit=unboundedknap( wt,pf, w, n);
	cout<<"\nProfit="<<profit;
	
	return 0;
}
