// Intersection of two sorted linked lists
// https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

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

node* calc(node* &l1,node* &l2)
{
	node *t1=l1,*t2=l2;
	node *l3=new node(0);
	node *a=l3;
	
	cout<<endl;
	while(t1 && t2)
	{
		
		if(t1->data==t2->data)
		{
			a->next=new node(t1->data);
			a=a->next;
			t2=t2->next;
			t1=t1->next;
		}
		else if(t1->data>t2->data)
		{
			t2=t2->next;
		}
		else
		{
			t1=t1->next;
		}
	}
	
	return l3->next;
}

int main()
{
	node *head1=NULL, *head2=NULL;
	cout<<"enter values for list1:";
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		insert(head1,x);
	}
	display(head1);
	cout<<endl<<"enter values for list2:";
	for(int i=0;i<6;i++)
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
