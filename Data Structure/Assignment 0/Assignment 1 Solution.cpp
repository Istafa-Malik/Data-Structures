#include <iostream>
using namespace std;

class Array{
private:
    int array[20];
    int *first;
    int *temp;
    int *Ltemp;
    int *Rtemp;

public:
    Array()
	{
        for(int i{0}; i<20; i++)
		{
            array[i] = 0; 
        }
        first = array;
        temp  = NULL;
        Ltemp = NULL;
        Rtemp = NULL;
    }
    
    void Add(int x);
    void Display();
    void MostFrequentElement(int l, int r, int frq);
    
};

void Array::Add(int a)
   {
    temp = first;
    for(int i{0}; i<20; i++)
	  {
        if(*(temp + i) == 0)
		{ 
        *(temp+i) = a;
        break;
        }
      }
    }

void Array::Display(){
    for(int i{0}; i<20; i++){
        cout << *(first +i) << " ";
    }
    cout << endl;
}

void Array::MostFrequentElement(int l, int r, int frq)
{
    int counter = 0;

    if(l >= 0 && r >= l && r < 20 && 2 * frq >= r - l + 1){

    Ltemp = first + l;
    Rtemp = first + r;
    temp = Ltemp;
    while (temp != Rtemp){

        for (int i {0}; i < 20; i++)
        {
            if(*temp = *(temp+i)){
                counter++;
                if(counter >= frq)
				{
                    cout << *temp << " ";
                }
                
            }
           
            break;
        }
        
        temp = temp +1;
        
        }
    }
    else{
        cout << "Minimum Requirements are not met " << endl;
    }
}

int main()
{
    Array D;
    int z;
    int choice = 0;
    int l;
    int r;
    int frq;
    cout << "Press 1 for Adding Data to your Array " <<endl;
    cout << "Press 2 for Displaying your Array " << endl;
    cout << "Press 3 for Checking Frequency" << endl;
    cout << "Press 4 to Exit " << endl;
    
    while(choice!= 4){
    cout << "Enter Choice " << endl;
    cin >> choice;

    if(choice == 1){
        cout << "Enter Data " << endl;
        int z;
        cin >> z;

        D.Add(z);
    }

    else if(choice == 2)
	{
        D.Display();
    }

    else if(choice == 3)
	{
        cout << "Enter Left Index" << endl;
        cin >> l;
        cout << "Enter Right Index" << endl;
        cin >> r;
        cout << "Enter frequency " << endl;
        cin>> frq;
    
        D.MostFrequentElement(l,r,frq);
    }

    if(choice == 4){
        exit(0);
    }
 
 }
    return 0;
}
