//Palindrome Partition
//Recursive solution


#include<iostream>
#include<string.h>
#include<algorithm>
#include<limits>
using namespace std;
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

	int mn=INT_MAX;
	for(int k=i;k<j;k++)
	{
		int temp=1+solve(str,i,k)+solve(str,k+1,j);
		
		if(temp<mn)
		{
			mn=temp;
		}
		
	}
	return mn;
}


int main()
{
	string s;
	cin>>s;
	int i=1,j=s.size()-1;
	int x=solve(s,0,j);
	cout<<"Number of partitions="<<x;
	
	return 0;
}