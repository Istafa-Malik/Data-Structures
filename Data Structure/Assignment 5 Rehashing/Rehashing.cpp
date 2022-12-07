#include<iostream>
using namespace std;

class HashTable
{
private :
	int s, r;
	int arr[];
public:
	HashTable(){
		cout<<" Enter Size: ";
		cin>>s;
		arr[s];
		
		for(int i=0;i<s;i++)
		{
			arr[i] = -1;
		}
		
		cout<<"Enter range "<<endl;
		cin>>r;
		while(r > s)
		{
			cout<<" Incorrect Range "<<endl;
			cout<<"Enter range again "<<endl;
			cin>>r;
		}
	}
	
	void insert(int val)
	{
		int re = val % r;
		if(arr[re]==-1)
		{
			arr[re]=val;
		}
		else
		{
			int start = re + 1;
			if(start>=s)
			{
				start = 0;
			}
			for(int i = start;i < s;i++)
			{
				if(start >= s - 1)
				{
					start = 0;
				}
				if(arr[i] == -1)
				{
					arr[i] = val;
					break;
				}
				if(i == start - 1){
					cout<<" Array Full "<<endl;
					break;
				}
			}
		}
	}
	
	int Search(int val)
	{
		int value;
		for(int i=0;i<s;i++)
		{
			if(arr[i] == val)
			{
				value = arr[i];
				break;
			}
		}
		return value;
	}
	
	void Output()
	{
		for(int i=0;i<s;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

int main()
{
	HashTable hash;
	hash.insert(50);
	hash.insert(80);
	hash.insert(100);
	hash.Output();
	hash.Search(100);
	return 0;
}
