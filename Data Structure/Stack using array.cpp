#include <iostream>
using namespace std;
class stack
{
	private:
		int top;
		int arr[5];
		public:
			stack()
			{
				top=top-1;
				for(int i=0;i<5;i++)
				{
					arr[i]=0;
				}
			}
			bool isempty()
			{
				if(top==-1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			bool isfull()
			{
				if(top==4)
				{
					return true;
				}
				else 
				{
					return false;
				}
			}
			int push(int value)
			{
				if(isfull())
				{
					cout<<"Stack Overflow "<<endl;
					return 0;
				}
				else
				{
					top=top+1;
					arr[top]=value;
					cout<<arr[top]<<endl;
				}
			}
			int pop()
			{
				if(isempty())
				{
					cout<<"Stack empty "<<endl;
					return 0;
				}
				else
				{
					int prev;
					prev=arr[top];
					arr[top]=0;
					top=top-1;
					return prev;
				}
			}
			
};
int main()
{
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	return 0;
}
