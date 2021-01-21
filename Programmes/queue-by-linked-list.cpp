#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#define MAX 50

using namespace std;
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();

int count=0;
void main()
{
    int no,ch,e;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.Front Element"<<endl;
    cout<<"4.Empty"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"6.Display"<<endl;
    cout<<"7.Queue Size"<<endl;
    create();
    while(1)
    {
        cout<<"Enter Choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter data"<<endl;
            cin>>no;
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e=frontelement();
            if(e!=0)
            {
                cout<<"front Element"<<e<<endl;
            }
            else
            {
                cout<<"No Front Element in Queue"<<endl;
                break;
            }
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;
        default:
            cout<<"Wrong Choice"<<endl;
            break;
        }
    }
}

void create()
{
    front=rear=NULL;
}
void queuesize()
{
    cout<<"Queue Size"<<count<<endl;
}
void enq(int data)
{
    if(rear==NULL)
    {
        rear=(struct node*)malloc(1*sizeof(struct node));
        rear->ptr=NULL;
        rear->info=data;
        front=rear;

    }
    else
    {
        temp=(struct node*)malloc(1*sizeof(struct node));
        rear->ptr=temp;
        temp->info=data;
        temp->ptr=NULL;
        rear=temp;
    }
    count++;
}

void display()
{
    front1=front;
    if((front1==NULL) && (rear==NULL))
    {
        cout<<"Empty Queue"<<endl;
        return;
    }
    while(front1!=rear)
    {
        cout<<front1->info;
        front1=front1->ptr;
    }
    if(front1==rear)
    {
        cout<<front1->info;
    }
}

void deq
{
    front1=front;
    if(front1==NULL)
    {
        cout<<"Display Element From Empty Queue"<<endl;
        return;
    }
    else
    {
        if(front1->ptr!=NULL)
        {
            front1=front1->ptr;
            cout<<front->info;
            free(front);
            front=front1;
        }
        else
        {
            cout<<front->info;
            free(front);
            front=NULL;
            rear=NULL;
        }
        count--;
    }
}

int frontelement()
{
    if((front!=NULL)&&(rear!=NULL))
    {
        return front->info;
    }
    else
    {
        return 0;
    }
}

void empty()
{
    f((front=NULL)&&(rear=NULL))
    {
        cout<<"Queue Empty"<<endl;
    }
    else
    {
        cout<<"Queue Not Empty"<<endl;
    }
}
