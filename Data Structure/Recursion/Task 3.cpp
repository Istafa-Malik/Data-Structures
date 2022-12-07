#include <iostream> 
using namespace std; 
  
unsigned int factorial(int n) 
{ 
    if (n == 0) 
        return 1;
	else 
        return n * factorial(n - 1); 
} 
   
int main() 
{ 
    int num;
    cout<<"Enter Your Number "<<endl;
    cin>>num; 
    cout << "Factorial of "<< num << " is: " << factorial(num) << endl; 
    return 0; 
}
