#include <iostream>
using namespace std;

class list{
	private:

	int A[5];
	int *crt;
	public:
		list()
		{
			crt=A;
		}

void set()
{
	int *p;
	p=crt;
	for(int i=1;i<=5;i++)
	{
    cout<<"Enter Value "<<endl;
	cin>>*p;		
     p++;
	}
	
}

	
	void back()
	{
		crt--;
	}
	
	void next()
	{
		crt++;
	}

int get(int x)
{
	return A[x];
}


int getcrt()
{
	return *crt;
}

};

int main()
{
	list l;
	l.set();
	cout<<l.getcrt()<<" \n";
	l.next();
	cout<<l.getcrt()<<"\n";
	cout<<l.get(3);
	
	return 0;
}
