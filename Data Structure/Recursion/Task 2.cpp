#include <iostream> 
using namespace std; 

int recurSum(int n) 
{ 
    if (n <= 1) 
        return n; 
    else
        return n + recurSum(n - 1); 
} 
  
int main() 
{ 
    int n;
    cout<<"Enter your Number "<<endl;
    cin>>n; 
    cout << recurSum(n); 
    return 0; 
} 
