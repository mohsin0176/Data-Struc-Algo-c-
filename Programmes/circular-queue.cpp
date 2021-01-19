#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define MAX 5
int front=-1,rear=-1;
int CQueue[max];
void insert();
void delete();
void display();
int main()
{

int w,n,o;
for(;;)
{
    cout<<"1.Insert"<<endl;
    cout<<"2.Delete"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"2.Exit"<<endl;
    cout<<"Enter What You Want:"<<endl;
    cin>>&w;
    switch(w)
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
        break;
    default:
        cout<<"Invalid Choice"<<endl;
    }
}
}
void insert()
{
    int no;
    if((front==0&&rear==(max-1))||front=rear+1)
    {
        cout<<"queue is full"<<endl;
        return;
    }
    cout<<"Enter A Number to Insert:"<<endl
    cin>>no;
    if(front==-1)
    {
        front=front+1;
    }
    else if(rear==max-1)
    {
        rear=0;
    }
    else
    {
        rear=rear+1;
        CQueue[rear]=no;
    }
}
void delete()
{
    if(front==-1)
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }
    CQueue[front];
    if(front==max-1)
    {
        front=0;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
    cout<<CQueue[front];
    front++;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    i=front;
    if(front<=rear)
    {
        cout<<"\n\n"<<endl;
        while(i<=rear)
        {
            cout<<CQueue[i++];
            cout<<"\n"<<endl;
        }
    }
    else
    {
        cout<<"\n\n"<<endl;
        while(i<max-1)
        {
            cout<<CQueue[i++]<<endl;
            i=0;
        }
        while(i<=rear)
        {
            cout<<CQueue[i++];
            cout<<"\n"<<endl;
        }
    }
}
