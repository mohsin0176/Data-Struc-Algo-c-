#include<bits/std++.h>
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

struct Node
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
        cout<<"3.Insert At The Begining"<<end;
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
            break
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
