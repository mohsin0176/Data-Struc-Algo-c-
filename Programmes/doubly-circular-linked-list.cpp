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
void insert_at_position()
{
    int info,pos,i;
    n *prevnode;
    cout<<"Enter The Value"<<endl;
    cin>>info;
    cout<<"Enter The Position"<<endl;
    cin>>pos;
    new=create_node(info);
    if(first==last&&first==NULL)
    {
        if(pos==1)
        {
            first=last=new;
            first->next=last->next=NULL;
            first->prev=last->next=NULL;
        }
        else
        {
            cout<<"You Can insert at a particular position"<<endl;
        }
    }
    else
    {
        if(number<pos)
        {
            cout<<"Node can not be inserted"<<endl;
            else
            {
                for(ptr=first;i=1;i<=number;i++)
                {
                    prevnode=ptr;
                    ptr=ptr->next;
                    if(i=pos-1)
                    {
                        prevnode->next=new;
                        new->prev=prevnode;
                        new->next=ptr;
                        ptr->prev=new;
                        cout<<pos;
                        break;
                    }
                }
            }
        }
    }
}

void display_in_rev()
{
    int i;
    if(first==last&&first==NULL)
    {
        cout<<"you can not delete"<<endl;
    }
    else
    {
        for(ptr=first;i=1;i<=number;i++)
        {
            prevnode=ptr;
            ptr=ptr->next;
            if(pos==1)
            {
                number--;
                last->next=prevnode->next;
                ptr->prev=prevnode->prev;
                first=ptr;
                cout<<prevnode->val;
                free(prevnode);
                break;
            }
        }
    }
}

void delete_at_beg()
{
    n* prevnode;
    int pos=1,i;
    if(first==last&&first==NULL)
    {
        cout<<"You Can not Delete"<<endl;
    }
    else

    {
        for(ptr=first;i=1;i<=number;i++)
        {
            prevnode=ptr;
            ptr=ptr->next;
            if(pos==1)
            {
                number--;
                last->next=prevnode->next;
                ptr->prev=prevnode->prev;
                first=ptr;
                cout<<prevnode->val;
                free(prevnode);
                break;
            }
        }
    }
}

void delete_at_end()
{
    int pos,i,count=0;
    n *temp,*prevnode;
    if(first==last&&first==NULL)
    {
        cout<<"You can delete"<<endl;
    }
    else
    {
        for(ptr=first,i=1;i<=number;i++)
        {
            prevnode=ptr;
            ptr=ptr->next;
            if(i=number-1)
            {
                number--;
                prevnode->next=ptr->next;
                ptr->next->prev=prevnode;
                cout<<ptr->val;
                free(ptr);
                break;
            }
            if(1==1)
            {
                number--;
                last->next=prevnode->next;
                ptr->prev=prevnode->prev;
                first=ptr;
                cout<<prevnode->val;
                free(prevnode);
                break;
            }
        }
    }
}


void delete_at_position()
{
    int pos,i,count=0;
    n *temp,*prevnode;
    cout<<"Enter Position"<<endl;
    cin>>pos;
    if(first==last&&first==NULL)
    {
        cout<<"You can not delete"<<endl;
    }
    else
    {
        if(number<pos)
        {
            cout<<"Can not Delete"<<endl;
        }
        else
        {
            for(ptr=first;i=1;i<=number;i++)
            {
                prevnode=ptr;
                ptr=ptr->next;
                if(pos==1)
                {
                    number--;
                    last->next=prevnode->next;
                    ptr->prev=prevnode->prev;
                    first=ptr;
                    cout<<prevnode->val;
                    free(prevnode);
                    break;
                }
                else if(i=pos-1)
                {
                    number--;
                    prevnode->next=ptr->next;
                    ptr->next->prev=prevnode;
                    cout<<ptr->val;
                    free(ptr);
                    break;
                }

            }
        }
    }
}
