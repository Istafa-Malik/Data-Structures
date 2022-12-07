#include <iostream>
using namespace std;
class queue
{
	private:
	int rear;
	int front;
	int arr[5];
	public:
		queue()
		{
			rear=-1;
			front=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool empty()
		{
			if(rear==-1 && front==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool full()
		{
			if(front==4)
			{
				return true;
			}
			else
			{ 
			    return false;
			}
		}
		void enqueue(int value)
		{
			if(full())
			{
				cout<<"Queue is Full "<<endl;
				return; 
			}
			else if(empty())
			{
				rear=0;
				front=0;
				arr[rear]=value;
				cout<<value<<endl;
			}
			else
			{
				rear++;
				arr[rear]=value;
				cout<<value<<endl;
			}
		}
		int dequeue()
		{
		int a;
			if(empty())
			{
				cout<<"Queue is Empty "<<endl;
				return 0; 
			}
			else if(front==rear)
			{
				a=arr[front];
				arr[front]=0;
				rear=-1;
				front=-1;
				return a;
			}
			else
			{
				a=arr[front];
				arr[front]=0;
				front++;
				return a;
			}
		}
	};
		int main()
		{
			queue q;
			q.enqueue(5);
			q.enqueue(6);
			q.enqueue(7);
			q.enqueue(8);
			q.enqueue(9);
			cout<<endl;
			cout<<q.dequeue()<<endl;
		    cout<<q.dequeue()<<endl;
	     	cout<<q.dequeue()<<endl;
	    	cout<<q.dequeue()<<endl;
	    	cout<<q.dequeue()<<endl;
			return 0;
		}

