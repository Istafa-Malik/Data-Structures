#include<iostream>
using namespace std;
class Queue
{
  private:
		int *myArray;
        int size;
		int front, rear;
  public:
		Queue(int);
		bool isEmpty();
		bool isFull();
		void enqueue(int value);
		int getFront(); 
		int dequeue();
		void display();
}; 

Queue::Queue(int s)
{
     myArray = new int[s];
     size = s;
	front = rear = -1;
}

bool Queue::isFull()
{
	if (rear == size - 1)
		return true;
	else
		return false;
}

bool Queue::isEmpty()
{
	if (front == rear)
		return true;
	else
		return false;
}

void Queue::enqueue(int value)
{
	if (isFull() )
		cout<<"Queue is full"<<endl;
	else
		myArray[++rear] = value;
		
}

int Queue::dequeue()
{
	if (isEmpty())
	{
		cout<<"Queue is empty"<<endl;
		return -1;
	}
	else
		return  myArray[++front];
		
}

int Queue::getFront()
{
	if (isEmpty())
	{
		cout<<"Queue is empty"<<endl;
		return -1;
	}
	else
		return  myArray[front+1];
		
}

void Queue::display()
{
for(int i =front+1; i<=rear; i++)
   {
	cout<< myArray[i]<< "     ";
   }	
}
 
int main()
{
	Queue q(5);
	q.enqueue(70);
	q.enqueue(80);
	q.enqueue(100);
	q.display();
	return 0;	
}



