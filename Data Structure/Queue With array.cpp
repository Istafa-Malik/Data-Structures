#include<iostream>

using namespace std;

class Queue
{
	private:
		int front;
		int array[5];
		int rear;
		
	public:
		
		Queue()
		{
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++)
			{
				array[i]=0;
			}
		}
		
		bool Empty()
		{
			if (front==-1 && rear==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	
		bool Full()
		{
			if(rear==4)
			{
				return true;
			}
			else
				{return false;}
		}
		
		void enqueue(int value)
		{
			if(Full())
			{
				cout<<"The Queue is Full."<<endl;
				return;
			}
			
			else if(Empty())//Inserting the values at the start.
			{
				rear=0;
				front=0;
				array[rear]=value;
			}
			else//Inserting the value between the Queue.
			{
				rear++;
				array[rear]=value;
			}
		}
		
		int dequeue()
		{
			int a;
			if(Empty())
			{
				cout<<"The Queue is Empty."<<endl;
				return 0;
			}
			
			else if(rear==front)//If the queue hase only one value in it.
			{
				a=array[front];
				array[front]=0;
				rear=-1;
				front=-1;
				return a;
			}
				
			else
			{
				a=array[front];
				array[front]=0;
				front++;
				return a;
			}	
		}
		
		void Display()
		{
			cout<<"*****Printing the Queue*****"<<endl;
			for(int i=1;i<5;i++)
			{
				cout<<array[i]<<endl;
			}
		}
};


int main()
{
	Queue q1;
	int option,value;
	
	do
	{
		cout<<"Which operation do you want to preform:"<<endl;
		cout<<"1. EnQueue:"<<endl;
		cout<<"2. DeQueue:"<<endl;
		cout<<"3. Display:"<<endl;
		cout<<"4. Exit:"<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
				cout<<"Enter the value=";
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"Value Dequeued="<<q1.dequeue()<<endl;
				break;
			case 3:
				q1.Display();
				break;
			default:
				cout<<"Enter the option number!"<<endl;
				break;
		}
	}while(option!=4);
	
	return 0;
}
