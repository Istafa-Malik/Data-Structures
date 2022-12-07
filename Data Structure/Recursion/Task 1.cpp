#include <iostream>
using namespace std;

void reverse(char* start, char* end)
{
  if(start > end)
    {return ;}
  else
  {
    char temp = *start;
    *start = *end;
    *end = temp;
    reverse(start+1,end-1);
	}
}
void reverse_sentance(char* w1, char* w2,char* w3){

  if(*w3=='\0')
  { 
    reverse(w2,w3-1);
    w2 = w3+1;
    reverse(w1,w3-1);
    return ;
  }
  
  if(*w3==' ')
  {  
    reverse(w2,w3-1);
    w2 =w3+1;
  }
    reverse_sentance(w1,w2,w3+1);
}

int main()
{
	
	char string[]="cat is running";
	reverse_sentance(string,string,string);
	cout<<string<<endl;
	
	return 0;
}
