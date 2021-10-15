/*
Rod Cutting Problem
using top down approach
problem statement:Given a rod of length n inches and an array of prices that 
includes prices of all pieces of size smaller than n. Determine the maximum value obtainable by 
cutting up the rod and selling the pieces.
*/


#include<iostream>
using namespace std;

int cutRod(int len[],int price[],int n, int length)
{
	int t[n+1][length+1],i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=length;j++)
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=length;j++)
		{
			if(j>=len[i-1])
			{
				t[i][j]=max(t[i-1][j],price[i-1]+t[i][j-len[i-1]]);
			}
			else
			{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][length];
}

int main()
{
	int n;
	cout<<"Enter Size of the array=";
	cin>>n;
	int len[n],price[n],length,i;
	cout<<"Enter the price and length of pieces:  \n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter length=";
		cin>>len[i];
		cout<<"Enter price=";
		cin>>price[i];
	}
	cout<<"Enter the length of the array=";
	cin>>length;
	int profit=cutRod(len,price,n,length);
	cout<<"Profit="<<profit;
	return 0;
}