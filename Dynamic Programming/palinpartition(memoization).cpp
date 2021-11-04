//Palindrome Partition
//memoization

#include<iostream>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<limits>
using namespace std;
int static t[100][100];
bool ispalindrome(string sl,int i,int j)
{
	while(i<j)
	{
		if(sl[i]!=sl[j])
		{
			return false;
		}
		i++;j--;
	}
	return true;
}
int solve(string str,int i,int j)
{

	if(i==j)
	return 0;
	if(ispalindrome(str,i,j))
	{
		return 0;
	}
	if(t[i][j]!=-1)
	return t[i][j];

	t[i][j]=INT_MAX;
	for(int k=i;k<j;k++)
	{
				
		t[i][j]=min(t[i][j],1+solve(str,i,k)+solve(str,k+1,j));
		
	}
	return t[i][j];
}


int main()
{
	string s;
	cin>>s;
	int i=1,j=s.size()-1;
	memset(t,-1,sizeof(t));
	int x=solve(s,0,j);
	cout<<"Number of partitions="<<x;
	
	return 0;
}