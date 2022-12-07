#include<iostream>
using namespace std;

int product(int x, int y)
{
	if (y == 0)
		return 0;
		
	if (y > 0)
		return (x + product(x, y - 1));

	if (y < 0)
		return -product(x, -y);
}

int main()
{
	int x, y;
	cout<< "Enter x "<<endl;
	cin>>x;
	cout<<"Enter y "<<endl;
	cin>>y;
	cout << "Sum will be : " << product(x, y);
	getchar();
	return 0;
}


