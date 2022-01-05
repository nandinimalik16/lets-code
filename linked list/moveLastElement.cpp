// Move last element to front of a given Linked List
// https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/


#include<iostream>


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
	cout<<"NULL"<<endl;
}

void remdup(node *&head)
{
	if(!head || !head->next)		
	{
		return;
	}
	node *seclast=head,*last=head->next;
	while(last->next)
	{
		seclast=last;
		last=last->next;
	}
	last->next=head;
	seclast->next=NULL;
	head=last;
		
}

int main()
{
	node *head=NULL;
	int n;
	cout<<"enter number of entries:";
	cin>>n;
	cout<<"enter values:";
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		insert(head,x);
	}
	display(head);
	remdup(head);
	
	display(head);
	return 0;
}