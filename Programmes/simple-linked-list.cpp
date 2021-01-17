#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;

int main()
{
int choice;

    while(1)
    {
        cout<<"Simple Linked List Operation:"<<endl;
        cout<<"Menu"<<endl;
        cout<<"1.Create"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Insert At The Begining"<<endl;
        cout<<"4.Insert At End"<<endl;
        cout<<"5.Insert At Specific Position"<<endl;
        cout<<"6.Delete From Begining"<<endl;
        cout<<"7.Delete From Ending"<<endl;
        cout<<"8.Delete From Specific Position"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_begin();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            delete_pos();
            break;
        default:
            cout<<"Wrong Choice";
            break;
        }
    }
    return 0;
}


void create()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        cout<<"Out of Memory Space";
        exit(0);
    }
    cout<<"Enter The Data Value for the node"<<endl;
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display()
{
    struct node *ptr;
    if(head==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    else
    {
        ptr=head;
        cout<<"Elements are:"<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->data;
            ptr=ptr->next;
        }
    }
}
