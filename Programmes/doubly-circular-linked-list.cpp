#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
    int val;
    struct node *next;
    struct node *prev;
};
typedef struct node n;
 n* create_node(int);
 void add_node();
 void insert_at_first();
 void insert_at_end();
 void display();
 void insert_at_position();
 void display_in_rev();
 void delete_at_beg();
 void delete_at_end();
 void delete_at_position();

 n *new,*ptr,*prev;
 n *first=NULL,*last=NULL;
 int number=0;
 void main()
 {
     int ch;
     cout<<"Doubly Circular Linked list"<<endl;
     cout<<"1.Insert At Beginning"<<endl;
     cout<<"2.Insert At End"<<endl;
     cout<<"3.Insert At Position"<<endl;
     cout<<"4.Delete At Beginning"<<endl;
     cout<<"5.Delete At End"<<endl;
     cout<<"6.Delete At Position"<<endl;
     cout<<"7.Display Linked List"<<endl;
     cout<<"8.Display In Reverse"<<endl;
     cout<<"9.Search Data At Linked List"<<endl;

     while(1)
     {
         cout<<"Enter Your Choice"<<endl;
         cin>>ch;
         switch(ch)
         {
         case 1:
            insert_at_first();
            break;
         case 2:
            insert_at_end();
            break;
         case 3:
            insert_at_position();
            break;
         case 4:
            delete_at_beg();
            break;
         case 5:
            delete_at_end();
            break;
         case 6:
            delete_at_position();
            break;
         case 7:
            Display();
            break;
         case 8:
            display_in_rev();
            break;
         default:
            cout<<"Invalid Choice"<<endl;

         }
     }
 }

 n* create_node(int info)
 {
     number++;
     new=(n*)malloc(sizeof(n));
     new->val=info;
     new->next=NULL;
     new->prev=NULL;
     return new;
 }

 void add_node()
 {
     int info;
     cout<<"Enter The Value to be added:"<<endl;
     cin>>info;
     new=create_node(info);
     if(first==last&&first==NULL)
     {
         first=last=new;
         first->next=last->next=NULL;
         first->prev=last->prev=NULL;
     }
     else
     {
         last->next=new;
         new->prev=last;
         last=new;
         last->next=first;
         first->prev=last;
     }
 }
void insert_at_end()
{
    int info;
    cout<<"Enter The Value"<<endl;
    cin>>info;
    new=create_node(info);
    if(first==last&&first==NULL)
    {
        cout<<"Inserted Done"<<endl;
        first=last=new;
        first->next=last->next=NULL;
        first->prev=last->prev=NULL;
    }
    else
    {
        cout<<"Insert Done"<<endl;
        last->next=new;
        new->prev=last;
        last=new;
        first->prev=last;
        last->next=first;
    }
}
void display()
{
    int i;
    if(first==last&&first==NULL)
    {
        cout<<"No Elements"<<endl;
    }
    else
    {
        cout<<number;
        for(ptr=first;i=0;i<number;i++,ptr=ptr->next)
        {
            cout<<ptr->val;
        }
    }
}
