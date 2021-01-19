#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 7
using namespace std;

int deque_arr[MAX];
int front=-1;
int rear=-1;
void insert_frontEnd(int item);
void insert_rearEnd(int item);
int delete_frontEnd();
int delete_rearEnd();
void display();
int isEmpty();
int isFull();

int main()
{
    int choice,item;
    while(1)
    {
        cout<<"1.Insert At Front End"<<endl;
        cout<<"2.Insert At Rear End"<<endl;
        cout<<"3.Delete At Front End"<<endl;
        cout<<"4.Delete At Rear End"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Quit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Input Element To Add In Queue"<<endl;
            cin>>item;
            insert_frontEnd(item);
            break;
        case 2:
            cout<<"Input Element To Add In Queue"<<endl;
            cin>>item;
            insert_rearEnd(item);
            break;
        case 3:
            cout<<delete_frontEnd();
            break;
        case 4:
            cout<<delete_rearEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(1);
        default:
            cout<<"Wrong Choice"<<endl;
        }
        cout<<front<<rear;
        display();
    }
}
void insert_frontEnd(int item)
{
    if(isfull())
    {
        cout<<"Queue Overflow"<<endl;
        return;
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==MAX-1)
    {
        rear=0;
    }
    else
    {
        rear=rear+1;
        dequeue_arr[rear]=item;
    }
}
int delete_frontEnd()
{
    int item;
    if(isEmpty())
    {
        cout<<"Queue Underflow"<<endl;
        exit(1);
    }
    item=dequeu_arr[front];
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        if(front==MAX-1)
        {
            front=0;
        }
        else
        {
            front=front+1;
        }
    }
    return item;
}

int delete_rearEnd()
{
    int item;
    if(isEmpty())
    {
        cout<<"Queue Underflow"<<endl;
        exit(1);
    }
    item=dequeue_arr[rear];
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(rear==0)
    {
        rear=MAX-1;
    }
    else
    {
        rear=rear-1;
    }
    return item;
}
int isfull()
{
    if((front==0&&rear==MAX-1)||(front=rear+1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if(front==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    int i;
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    cout<<"Queue Elements"<<endl;
    i=front;
    if(front<=rear)
    {
        while(i<=rear)
        {
            cout<<deque_arr[i++];
        }
    }
    else
    {
        while(i<=MAX-1)
        {
            cout<<deque_arr[i++];
            i=0;
        }
        while(i<=rear)
        {
            cout<<deque_arr[i++];
        }
    }
    cout<<"\n"<<endl;
}
