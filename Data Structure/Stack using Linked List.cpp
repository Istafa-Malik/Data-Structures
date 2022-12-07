#include<iostream>
using namespace std;
struct node
{
	node *next;
	int data;
	int key;
};
class stack
{
public:
	node *top;
	public:
	stack()
	{
		top=NULL;
	}
bool isempty()
{
	if(top==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	}	
bool check_if_node_already_exist(node *n)
{
	node *temp=top;
	bool exist=false;
	while(temp!=NULL)
	{
		if(temp->key==n->key)
         {
         	exist=true;
			break; 
		}
		temp=temp->next;	
	}
	return exist;
}s
void push(node *n)
{
	if(top==NULL)
	{
		top=n;
		cout<<"Insertionn done";
	}
	else if (check_if_node_already_exist(n)==true)

{
cout<<"Enter a different value";
}
else
{
	node *temp=top;
	top=n;
	n->next=temp;
	cout<<"insertion done";
}
}
node * pop()
{
	if (isempty())
	{
		cout<<"underflow";
		return NULL;
	}
	node *temp=top;
	top=temp->next;
	temp=top;
	}
void display()
{
	cout<<"Values of stack"<<endl;
	node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->key<<"   "<<temp->data<<endl;
	}
}
};
