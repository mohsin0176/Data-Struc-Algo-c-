#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void push2(int);
void push1(int);
int pop2();
int pop1();
void enqueue();
void dequeue();
void display();
void create();


int st1[100],st2[100];
int top1=-1;int top2=-1;
int count=0;
void main()
{
    int ch;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;
    create();
    while(1)
    {
        cout<<"Enter Choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout<<"Wrong Choice"<<endl;

        }
    }

}
void create()
{
    top1=top2=-1;
}
void push1(int data)
{
    st1[++top1]=data;
}
int pop1()
{
    return(st1[top1--]);
}
void push2(int data)
{
    st2[++top2]=data;
}

int pop2()
{
    return (st2[top2--]);
}
void enqueue()
{
    int data,i;
    cout<<"Data into Queue"<<endl;
    cin>>data;
    push1(data);
    count++;
}


void dequeue()
{
    int i;
    for(i=0;i<=count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for(i=0;i<=count;i++)
    {
        push1(pop2());
    }
}

void display()
{
    int i;
    for(i=0;i<=top1;i++)
    {
        cout<<st1[i];
    }
}
