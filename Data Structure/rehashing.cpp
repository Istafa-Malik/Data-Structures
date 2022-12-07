#include<iostream>
using namespace std;

class HashTable
{
private :
	
	int size, rang;
	int arr[];
	
public:
	HashTable()
	{
		cout<<"Enter size =";
		cin>>size;
		arr[size];
		for(int i = 0 ;i < size;i++)
		{
			arr[i] = -1;
		}
		cout<<"Enter the range =";
		cin>>rang;
		while(rang > size)
		{
			cout<<"Invalid!!!"<<endl;
			cout<<"Enter the range again =";
			cin>>rang;
		}
	}
	
	void insertion(int val)
	{
		int rem = val % rang;
		if(arr[rem] == -1)
		{
			arr[rem] = val;
		}
		else
		{
			int start = rem + 1;
			if(start >= size)
			{
				start = 0;
			}
			for(int i = start;i < size;i++)
			{
				if(start >= size - 1)
				{
					start = 0;
				}
				if(arr[i] == -1)
				{
					arr[i] = val;
					break;
				}
				if(i == start - 1)
				{
					cout<<"Array is Full!!"<<endl;
					break;
				}
			}
		}
	}
	
	int searching(int val){
		int value;
		for(int i = 0;i <size;i++)
		{
			if(arr[i] == val)
			{
				value = arr[i];
				break;
			}
		}
		return value;
	}
	void print()
	{
		for(int i = 0;i < size;i++)
		{
			cout<<arr[i]<<"\t";
		}
		cout<<endl;
	}
};

int main(){
	HashTable hash;
	hash.insertion(40);
	hash.insertion(7);
	hash.insertion(21);
	hash.insertion(803);
	hash.insertion(146);
	hash.insertion(30);
	hash.print();
	
	return 0;
}
