//Count the triplets
//https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int counttrip(vector<int> m,int n)
{
	sort(m.begin(),m.end());
	int c=0,s=0,i=0;
	for(i=0;i<n-2;i++)
	{
		s=m[i]+m[i+1];
		if(s==m[i+2])
		{
			c++;
		}
	}
	return c;
}

int main()
{
	int N;
	cin>>N;
	int i,arr[N];
	vector<int > m;
	for(i=0;i<N;i++)
	{
		cin>>arr[i];
		m.push_back(arr[i]);
		
	}
	int x=counttrip(m,N);
	cout<<x;
	return 0;
}
