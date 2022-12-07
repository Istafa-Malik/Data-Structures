#include<iostream>
#include<string>
using namespace std;
bool x_ish(string s,string t)
{
    int *count,n=s.length(),counter=0,N=t.length();
    count = new int[n];
    char ch[n+1],ch1[N+1];
    for(int i=0;i<n;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(t[i]==s[j])
            {
                count[j]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count[i]>=1)
            counter++;
    }
    if(counter==n)
        return true;
    else
        return false;
}
int main()
{
	int a;
    string s,t;
    cout<<"Enter your Words "<<endl;
    cin>>s>>t;
    a = x_ish(s,t);
    if(a)
        cout<<"Word are X-ish "<<endl;
    else
        cout<<"Words are Not X-ish "<<endl;
        return 0;
}
