#include <iostream> 
using namespace std;
struct node
{
	int data;
	node *next;
};
class linkedlist
{
    private:
	node *head;
	node *tail;
	public:
	linkylist()
	{
		head=NULL;
		tail=NULL;
		}	
		void insert()
		{
			node *temp=new node;
			cout<<"Enter Value "<<endl;
			cin>>temp->data;
			temp->next=head;
			temp=head;
		}
		void insert2()
		{
			node *temp=new node;
			cout<<"Enter Value "<<endl;
			cin>>temp->data;
			temp->next=NULL;
			node *curr=head;
			do
			{
				curr=curr->next;
			}
			while(curr->next!=NULL);
				curr->next=temp;
		}
		void insert3()
		{
			int pos;
			node *temp=new node;
			cout<<"Enter Position "<<endl;
			cin>>pos;
			node *curr=head;
			for(int i=1;i<=(pos-1);i++)
			{
				curr=curr->next;
			}
			temp->next=curr->next;
			curr->next=temp;
		}
		void delete_from_start()
		{
			node *temp;
			temp=head;
			head=head->next;
			temp->next=NULL;
			delete temp;
		}
		void delete_from_end()
		{
			node *temp;
			while(temp->next!=tail)
			{
				temp=temp->next;
			}
			temp->next=NULL;
			tail=temp;
		}
		void delete_from_desired_positon()
		{
			int pos;
			cout<<"Enter Position "<<endl;
			cin>>pos;
			node *temp;
			for(int i=1;i<=pos-1;i++)
			{
				temp=temp->next;
			}
			temp->next=NULL;
		}
		void counter()
		{
			node*temp;
			int count;
			temp=head;
			while(temp!=NULL)
			{
				count++;
				temp=temp->next;
			}
			
		}
};
int main()
{
	linkedlist l;
	l.insert();
	l.insert2();
	l.insert3();
	l.delete_from_start();
	l.delete_from_end();
	l.delete_from_desired_positon();
	return 0;
}


