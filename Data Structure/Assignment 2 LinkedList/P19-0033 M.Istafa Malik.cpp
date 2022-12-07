#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

class linkedList
{
public:
    node* first;
    node* second;
    int cl;
    linkedList()
    {
        first=NULL;
        second=NULL;
        cl=0;
    }

    void insert(int p,int value)
    {
        if((p-1)>length())
        {
           cout<<"Current list length increases "<<length()<<endl;
        }
        else{
        node* temp=new node;
        if(p==1)
        {
            temp->data=value;
            temp->next=first;
            first=temp;
            cl++;
        }
        else
        {
        node* pre=new node;
        node* post=new node;
        post=first;

        int  i = 1;
        while(i < p)
        {
            pre = post;
            post = post->next;
            i++;
        }

        temp->data = value;
        pre->next = temp;
        temp->next = post;
        cl++;
        }
        }
    }

    void output() {
        node* current = first;
        if(empty()==0)
        {
            cout<<"Empty List"<<endl;
        }
        else
        {
        for(int i=1;current != NULL;i++)
        {
            if(i==1)
            {
                cout<<endl;
                cout<<"List is: "<<endl;
            }
            cout <<i<<". "<<current->data <<endl;
            current = current->next;
        }
        cout<<endl;
    }
    }


    int pop(int p)
    {
        if((p)>length())
        {
            cout<<"Current list length increases "<<length()<<endl;
        }
        else{
                int reteval=0;
        node* temp=new node;
        if(p==1)
        {
            reteval=first->data;
            temp=first->next;
            delete first;
            first=temp;
            cl--;
            return reteval;
        }
        else
        {
          node* current=new node;
          current = first;
          for(int i=1;i<=length();i++)
          {
              if(i==p)
              {
                  reteval=current->data;
                  temp->next=current->next;
                  delete current;
                  cl--;
                  return reteval;
              }
              temp=current;
              current=current->next;
          }
        }
        }
    }

    int search(int lnd)
    {
        int count=0;
        node* post=new node;
        post=first;
       int i=0;
       while(i<=length())
        {
            if(post->data==lnd)
            {
                count++;
                return count;
            }
            else
            {
                post=post->next;
                count++;
            }
            i++;
        };
        if(post->next==NULL)
        {
            return -1;
        }
    };
    int length()
    {
        if((first==NULL)&&(second==NULL))
        {
            return 0;
        }
        return cl;
    }
    int empty()
    {
        if((first==NULL)&&(second==NULL))
            return 0;
        else
            return 1;
    }
    void emptyness()
    {
        if(empty() == 1)
        cout<<"List is Not Empty "<<endl;
    else
        cout<<"List is Empty "<<endl;
    }
};

int main()
{
    linkedList a;
    a.emptyness();
    a.insert(1,1);
    a.insert(2,2);
    a.insert(3,3);
    a.insert(2,12);
    a.output();
    cout<<"Searching for '12' "<<endl;
    if(a.search(12) >=1)
    cout<<"Data Found at "<<a.search(56)<<endl;
    else
    cout<<"Data Not Found "<<endl;
    cout<<endl;
    cout<<"Before Poping data "<<endl;
    a.output();
    a.pop(2);
    cout<<"After Poping data "<<endl;
    a.output();
    a.emptyness();
    return 0;
}
