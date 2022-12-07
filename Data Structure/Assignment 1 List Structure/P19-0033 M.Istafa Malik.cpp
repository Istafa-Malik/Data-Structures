#include<iostream>
using namespace std;

void getlist(int arr[],int s)
{
	int *current=NULL;
	current=arr;
	cout<<"Enter array value = "<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>current[i];
	}
}

void update(int arr[],int s)
{
	int *current=NULL;
	int index;
	cout<<"Type the Index you want to replace "<<endl;
	cin>>index;
	current=arr;
	for(int i=0;i<s;i++)
	{
		if(i==index)
		{
			cout<<"Enter new value "<<endl;
			cin>>current[i];
		}
	}
}

void length(int arr[],int s)
{
	int *current=NULL;
	int counter=0;
	for(int i=0;i<s;i++)
	{
		counter++;
	}
	cout<<"The length of array is "<<counter;
}

void back(int arr[],int s)
{
	int *current=NULL;
	int index;
	cout<<"Which index back value you want to print "<<endl;;
	cin>>index;
	current=arr;
	cout<<"The back value of index  "<<index<<"  is  "<<current[--index];
}

void next(int arr[],int s)
{
	int *current=NULL;
	int index;
	cout<<"Enter the Index Whose next value you want to print "<<endl;
	cin>>index;
	current=arr;
	cout<<"The back value of index  "<<index<<"  is  "<<current[++index];
}

void start(int arr[],int s)
{
	int *current=NULL;
	current=arr;
	cout<<"The starting value of array is "<<*current;
}

void end(int arr[],int s)
{
	cout<<"The end value of array is ="<<arr[--s];
}

void remove(int arr[],int s)
{
	int del,count=0;
	cout<<"Enter the element you want to delete = ";
    cin>>del;
        for(int i=0; i<s; i++)
        {
            if(arr[i]==del)
            {
            for(int j=i; j<(s-1); j++)
            {
            arr[j]=arr[j+1];
            }
            count++;
            break;
            }
        }
        if(count==0)
        {
                cout<<" Not found "<<endl;
        }
        else
        {
                cout<<" Element deleted "<<endl;
                cout<<" The new array is "<<endl;
                for(int i=0; i<(s-1); i++)
                {
                        cout<<arr[i]<<" ";
                }
        }
}

void add(int arr[],int s)
{
	int *current=NULL;
	s=s+1;
	cout<<"size"<<s;
	cout<<"Enter the value you want to add "<<endl;
	cin>>arr[--s];
	cout<<"The new array is "<<endl;
	for(int i=0;i<=s;i++)
	{
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int s,choice;
	cout<<"Enter the size of array"<<endl;
	cin>>s;
	int *arr=new int[s];
	getlist(arr,s);
	cout<<"Press\n1.update()\n2.length()\n3.back()\n4.Next()\n5.start()\n6.end()\n7.Remove()\n8.Add()";
	cin>>choice;
	if(choice==1)
	{
		update(arr,s);
	}
	if(choice==2)
	{
		length(arr,s);
	}
	if(choice==3)
	{
		back(arr,s);
	}
	if(choice==4)
	{
		next(arr,s);
	}
	if(choice==5)
	{
		start(arr,s);
	}
	if(choice==6)
	{
		end(arr,s);
	}
	if(choice==7)
	{
		remove(arr,s);
	}
	if(choice==8)
	{
		add(arr,s);
	}
	return 0;
}
	
	
