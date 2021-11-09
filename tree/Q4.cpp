//Binary Search Tree


#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node * create(int item)
{
	struct node *ptr=new node;
	ptr->data=item;
	ptr->left=ptr->right=NULL;
	return ptr;
}
struct node * insert(struct node *ptr,int item)
{
	if(ptr==NULL)
	{
		return create(item);
	}
	if(ptr->data>item)
	{
		ptr->left=insert(ptr->left,item);
	}
	else
	{
		ptr->right=insert(ptr->right,item);
	}
	return ptr;
}
void inorder(struct node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	inorder(ptr->left);
	cout<<ptr->data<<" ";
	inorder(ptr->right);
}
void search(struct node *&cur,int item,struct node *&parent)
{
	while(cur!=NULL && cur->data!=item)
	{
		parent =cur;
		if(item<cur->data)
		{
			cur=cur->left;
		}
		else
		{
			cur=cur->right;
		}
	}
}
struct node* findmin(struct node *cur)
{
	while(cur->left!=NULL)
	{
		cur=cur->left;
		
	}
	return cur;
}
void deletion(struct node *&ptr,int item)
{
	struct node *parent=NULL;
	struct node *cur=ptr;
	search(cur,item,parent);
	if(cur==NULL)
	{
		return;
	}
	if(cur->left==NULL&& cur->right==NULL)
	{
		if(cur!=ptr)
		{
			if(parent->left==cur)
				parent->left=NULL;
			else
				parent->right=NULL;
		}
		else
		{
			ptr==NULL;
		}
		free(cur);
	}
	else if(cur->left && cur->right)
	{
		struct node *succ= findmin(cur->right);
		int val=succ->data;
		deletion(ptr,succ->data);
		cur->data=val;
	}
	else
	{
		struct node *child=(cur->left)?cur->left:cur->right;
		if(cur!=ptr)
		{
			if(cur==parent->left)
				parent->left=child;
			else
			{
				parent->right=child;
			}
		}
		else
			ptr=child;
		free(cur);
	}
}

int main()
{
	struct node *root=NULL;
	int keys[8];
	for(int i=0;i<8;i++)
	{
		cout<<"\nEnter data=";
		cin>>keys[i];
		root=insert(root,keys[i]);
	}
	inorder(root);
	cout<<"\nenter element to be deleted:";
	int x;
	cin>>x;
	deletion(root,x);
		inorder(root);
	return 0;
}