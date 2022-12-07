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
    node* head;
    node* tail;
    int count;
    linkedList()
    {
        head=NULL;
        tail=NULL;
        count=0;
    }
    void createnode(int value)
    {
        node* temp=new node;
        temp->data=value;
        temp->next=NULL;
        count++;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void reverse()
    {
        node* current = NULL;
        node* next = NULL;
        node* prev = NULL;
        current = head;
        while(current!=NULL)
        {
            next = current->next;
            current->next=prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void pushnode(int value)
    {
        node* temp=new node;
        temp->data=value;
        temp->next=head;
        head=temp;
        count++;
    }
    void insertatpos(int pos,int value)
    {
        if((pos-1)>length())
        {
            cout<<"Node Cannot be added at this position\n coz list length is "<<length()<<endl;
        }
        else{

        if(pos==1)
        {
            pushnode(value);
        }
        else
        {
        node* pre=new node;
        node* post=new node;
        node* temp=new node;
        post=head;

        for(int  i = 1;i < pos ; i++)
        {
            pre = post;
            post = post->next;
        }
        temp->data = value;
        pre->next = temp;
        temp->next = post;
        count++;
        }}
    }

    int pop()
    {
        int reteval=0;
        node* temp=new node;
        reteval=head->data;
        temp=head->next;
        delete head;
        head=temp;
        count--;
        return reteval;
    }

    void printList() {
        node* current = head;
        int counter=1;
        if(head==NULL)
        {
            cout<<"List is Empty!!!";
        }
        else
        {
        cout<<"\nPrinting the List Below: \n";
        while (current != NULL) {
            cout <<counter<<". "<<current->data <<endl;
            current = current->next;
            counter++;
        }
        cout<<endl;
    }
    }


    int popat(int pos)
    {
        if((pos)>length())
        {
            cout<<"Node Cannot be added at this position\n coz list length is "<<length()<<endl;
        }
        else{
        if(pos==1)
        {
            pop();
        }
        else
        {
         int reteval;
          node* temp=new node;
          node* current=new node;
          current = head;
          for(int i=1;i<=length();i++)
          {
              if(i==pos)
              {
                  reteval=current->data;
                  temp->next=current->next;
                  delete current;
                  count--;
                  return reteval;
              }
              temp=current;
              current=current->next;
          }
        }}
    }

    int searchlnd(int lnd)
    {
        int counter=0;
        node* temp=new node;
        temp=head;
        for(int i=0;i<=length();i++)
        {
            if(temp->data==lnd)
            {
                counter++;
                return counter;
            }
            temp=temp->next;
            counter++;
        }
        if(temp->next==NULL)
        {
            return -1;
        }
    }
    int length()
    {
        if((head==NULL)&&(tail==NULL))
        {
            return 0;
        }
        return count;
    }
    int empty()
    {
        if((head==NULL)&&(tail==NULL))
        {
            return 0;
        }
        else
            return -1;
    }

    void methods()
    {
        int opt,data1,posi;
        do{
        cout<<"\n**************************************************\n";
        cout<<"Enter Number according your desired Operation You\n";
        cout<<"want to be performed:\n";
        cout<<"1. To Enter Node at your desired position \n";
        cout<<"2. To Delete a Node at the Given Position\n";
        cout<<"3. To Search for a node in the linked list\n";
        cout<<"4. To Check the Length of the Linked List\n";
        cout<<"5. To Check whether the List is Empty or Not? \n";
        cout<<"6. To Print the Whole List\n";
        cout<<"7. To Exit the Program \n";
        cin>>opt;
         if(opt==1)
        {
            cout<<"Enter the Value you want to enter in the node\n";
            cin>>data1;
            cout<<"Now, enter the position where the data is to be stored\n";
            cin>>posi;
            insertatpos(posi,data1);
        }
         if(opt==2)
        {
            cout<<"Enter the position from where the node is to be deleted\n";
            cin>>posi;
            popat(posi);
        }
         if(opt==3)
        {
            cout<<"Enter the Value you want to searched in the node\n";
            cin>>data1;
            if(searchlnd(data1)>=0)
            {
                cout<<"The data is found at "<<searchlnd(data1)<<"th position"<<endl;
            }
            else
                cout<<"DATA not found \n";
        }
         if(opt==4)
        {
            cout<<"The Length of the Linked List is "<<length()<<endl;
        }
         if(opt==5)
        {
                reverse();
        }
        if(opt==6)
        {
            printList();
        }
    }while(opt!=7);
    }
};

int main()
{
    linkedList l;
    l.methods();
    return 0;
}
