#include<iostream>
#include<string>
using namespace std;

void ef(string s)
{
    int count[3]={0},n=s.length();

    for(int i=0;i<=n;i++)
    {
    	 if(s[i]=='f')
            count[2]++;
        if(s[i]=='e')
            count[0]++;
        if(s[i]=='l')
            count[1]++;
    }
    if(count[0]>=1 && count[1]>=1 && count[2]>=1)
        cout<<"Your word is Word is Elfish "<<endl;
    else
        cout<<" Wrong Word "<<endl;
}
int main()
{
    string s;
    cout<<"Enter Number for Testing "<<endl;
    cin>>s;
    ef(s);
    return 0;
}
