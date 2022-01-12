// Intersection Point in Y shaped linked lists
// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1


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
int cal(node* &l1,node* &l2)
{	
	node * l3=l2;
	while(l1)
	{
		l3=l2;
		while(l3)
		{
			if(l1==l3)
			{
				return l1->data;
			}
			l3=l3->next;
		}
		l1=l1->next;
	}
	return -1;
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
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		insert(head2,x);
	}
	//head2->next->next->next->next=head1->next->next->next->next;
	display(head2);
	int ans=cal(head1,head2)	;
	if(ans==-1)
	{
		cout<<endl<<"intersection not found";
		
	}
	else
	{
		cout<<"\nIntersection found at "<<ans;
	}

	return 0;
}
