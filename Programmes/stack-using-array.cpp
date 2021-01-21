#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<bits/stdc++.h>
#define max 50
using namespace std;
void push();
void pop();
void display();
int menu();
int stack[max],top=0;
void main()
{
    int ch;
    do
        {

        ch=menu();
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout<<"Enter A Valid Choice"<<endl;
        }
        }
        while(1);

}

int menu()
{
    int ch;
    cout<<"Stack"<<endl;
    cout<<"1.Push"<<"2.Pop"<<"3.Display"<<"4.Exit"<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>ch;
    return ch;
}

void push()
{
    if(top==max)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        int element;
        cout<<"Enter Element"<<endl;
        cin>>element;
        cout<<element<<"\t"<<top<<"\t"<<endl;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        top--;
        cout<<"Element has been popped out"<<endl;

    }
}

void display()
{
    if(top==0)
    {
        cout<<"Stack Is Empty"<<endl;
    }
    else
    {
        int i;
        for(i=0;i<top;i++)
        {
            cout<<stack[i]<<endl;
        }
    }
}
