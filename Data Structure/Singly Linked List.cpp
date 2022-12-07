#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
void display(node *n)
{
	while(n!=0)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	int a,b,c;
	cout<<"Enter Values for linked list "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	node *head=new node;
	node *second=new node;
	node *third=new node;
	
	head->data=a;
	head->next=second;
	
	second->data=b;
	second->next=third;
	
	third->data=c;
	third->next=NULL;
	
	display(head);
}
	
	
	
	
	
	
