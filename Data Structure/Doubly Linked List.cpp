#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};
class List
{
private:
	node *first;
	node *second;

public:
	   List()
	{
		first = NULL;

	}
	void input(int Data)
	{
		node *NewNode= new node; 
		NewNode->data=Data;
		NewNode->next=0;
		NewNode->prev=0;
		if(first==0)
		{
			first=second=NewNode;
		}
		else
		{
			second->next=NewNode;
			NewNode->prev=second;
			second=NewNode;
		}
	}
	void Output()
	{
		second = first;
		cout<<" Doubly linked list = "<<endl;
		while (second!=0)
		{
			cout << second->data<< ",";
			second = second->next;	
		}
		cout << endl;
	}
        void Dell()
	{
		second=first;
		node *temp;
		temp=first;
		int p;
		cout<<"Enter the position you want to remove data from "<<endl;
		cin>>p;
		if(first==NULL)
		{
			cout<<"List empty!"<<endl;
		}
		else
		{
			for(int i=0;i<p-1;i++)
			{
				temp=temp->next;	
			}
			temp->prev->next=temp->next;  
			temp->next->prev=temp->prev;  
			delete temp;
		}
	}
};
int main()
{
	List a;
	a.input(1);
	a.input(2);
	a.input(3);
	a.input(4);
	a.Output();
	a.Dell();
	a.Output();
	
    return 0;
}

