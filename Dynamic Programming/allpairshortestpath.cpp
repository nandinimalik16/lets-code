//All pair shortest path
//all pair shortest paths also known as floyd warshall algorithm

#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;

int main()
{
	int n,ne,i,j,k,u,v,w;
	cout<<"enter number of vertices:";
	cin>>n;
	cout<<"enetr number of edges:";
	cin>>ne;
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				arr[i][i]=0;
			}
			else{
				arr[i][j]=999;
			}
		}
	}
	for(i=0;i<ne;i++)
	{
		cout<<"\nEnter start and end vertices:";
		cin>>u>>v;
		cout<<"\nenter weight:";
		cin>>w;
		arr[u-1][v-1]=w;
	}
	cout<<"bjbjkjkljlj\n";
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}