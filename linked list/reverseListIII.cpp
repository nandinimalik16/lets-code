// Reverse a Linked List in groups of given size
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1


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

node* rev(node *&root,int k)
{
	if(!root)
	{
		return NULL;
	}
	node *curr,*prev,*nxt;
	curr=root;
	prev=NULL;
	nxt=NULL;
	int i=0;
	while(curr!=NULL && i<k)
	{
		nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
		i++;
	}
	if(nxt)
	{
		root->next=rev(nxt,k);
	}
	return prev;
}

int main()
{
	node *head=NULL;
	cout<<"enter values:";
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		insert(head,x);
	}
	display(head);
	cout<<endl<<"enter the size of grp:"<<endl;
	int k;
	cin>>k;
	head=rev(head,k);
	display(head);

	return 0;
}