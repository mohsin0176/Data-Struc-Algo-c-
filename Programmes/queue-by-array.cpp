#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#define MAX 50

using namespace std;
int queue_array[MAX];
int rear=-1;
int front=-1;
void delete();
void display();
void insert();
int main()
{
    int choice;
    while(1)
    {
        cout<<"1.Insert"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
}

void insert()
{
    int add_item;
    if(rear==MAX-1)
    {
        cout<<"Queue Overflow"<<endl;
    }
    else

    {
        if(front==-1)
        {
            front=0;
            cout<<"Insert Element In Queue"<<endl;
            cin>>add_item;
            rear+=1;
            queue_array[rear]=add_item;
        }
    }
}
void delete()
{
    if(front==-1||front>rear)
    {
        cout<<"Queue Underflow"<<endl;
        return;
    }
    else
    {
        cout<<"Deleted Element is"<<queue_array[front]<<endl;
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is"<<endl;
        for(i=front;i<=rear;i++)
        {
            cout<<queue_array[i]<<endl;
        }
    }
}
