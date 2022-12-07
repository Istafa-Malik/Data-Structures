#include <iostream>  
using namespace std; 
  
class Stack { 
public :
    int top;
    int size;
	int *a; 
  
public: 
    Stack( int s)
	 { 
	 a= new int[s];
	 top = -1;
	 size=s;
    
	 } 
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
    void display();
}; 
  
bool Stack::push(int x) 
{ 
    if (top > size) { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else { 
        a[++top] = x; 
        cout << x << " pushed into stack\n"; 
        return true; 
    } 
} 
  
int Stack::pop() 
{ 
    if (top < 0) { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else { 
        int x = a[top--]; 
        return x; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    return (top < 0); 
} 
  
  void Stack :: display()
  {
  	int t=top;
  	for(int i=0;i<=t;i++)
  	{
  		cout<<"    "<<a[i]<<endl;
	  }
  }
int main() 
{ 
    class Stack s(4); 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.display();
	cout << s.pop() << " Popped from stack\n"; 
    s.display(); 
    cout << s.pop() << " Popped from stack\n"; 
    s.display(); 
    return 0; 
}
