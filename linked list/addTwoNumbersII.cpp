// Add two numbers represented by linked list
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

/*
Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.

    The sum list is a linked list representation of the addition of two input numbers from the last.
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class node{
	public:
		int data;
		node *next;
		node(int val)
		{
			data=val;
			next=NULL;
		}
		
};
void insert(node* &head,int val)
{
	node *n=new node(val);
	if(!head)
	{
		head=n;
		return;
	}
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void display(node *root)
{
	while(root!=NULL)
	{
		cout<<root->data<<" ----> ";
		root=root->next;
	}
	cout<<"NULL";
}
vector<int> ans(vector<int>&a,vector<int>&b)
{
	int crr=0,i=a.size(),j=b.size();
	
	cout<<endl;
	vector<int>c;
	while(i||j)
	{
		int sum=crr;
		if(i)
		{
			sum+=a[i-1];
			i--;
		}
		if(j)
		{
			sum+=b[j-1];
			j--;
		}
		c.push_back(sum%10);
		crr=sum/10;
		
	}
	int k=c.size();
	
	while(k)
	{
		cout<<" "<<c[k-1]<<" ";
		k=k-1;
	}
	if(crr)
	{
		c.push_back(crr);
	}
	return c;
	
}

node* calc(node* &l1,node* &l2)
{
	vector<int> a,b;
	while(l1)
	{
		a.push_back(l1->data);
		l1=l1->next;
	}
	while(l2)
	{
		b.push_back(l2->data);
		l2=l2->next;
	}
	vector<int> c=ans(a,b);
	reverse(c.begin(),c.end());
	node *l3=new node(c[0]);
	node *l=l3;
	for(int i=1;i<c.size();i++)
	{
		l->next=new node(c[i]);
		l=l->next;
	}
	return l3;
}




int main()
{
	node *head1=NULL, *head2=NULL;
	cout<<"enter values for list1:";
	for(int i=0;i<3;i++)
	{
		int x;
		cin>>x;
		insert(head1,x);
	}
	display(head1);
	cout<<endl<<"enter values for list2:";
	for(int i=0;i<2;i++)
	{
		int x;
		cin>>x;
		insert(head2,x);
	}
	display(head2);
	node *ans=calc(head1,head2);
	cout<<endl<<"answer:";
	display(ans);
	

	return 0;
}