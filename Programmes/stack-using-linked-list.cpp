#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<bits/stdc++.h>
#define max 50
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
void push(int);
void pop();
void display();

int main()
{
    int choice,value;
    cout<<"Stack using Linked List"<<endl;
    while(1)
    {
        cout<<"Menu"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter The Value To Be Insert"<<endl;
            cin>>value;
            push(value);
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
            cout<<"Wrong Selection"<<endl;
        }
    }
    return 0;
}

void push(int value)
{
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    if(top==NULL)
    {
        newNode->next=NULL;
    }
    else
    {
        newNode->next=top;
        top=newNode;
        cout<<"Insert Success"<<endl;
    }
}

void pop()
{
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        struct Node *temp=top;
        cout<<temp->data;
        top=temp->next;
        free(temp);
    }
}
void display()
{
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        struct Node *temp=top;
        cout<<temp->data;
        top=temp->next;
        free(temp);
    }
}
