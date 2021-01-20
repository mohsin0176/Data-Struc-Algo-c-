#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define MAX 50
using namespace std;
int top=-1;
int front=0;
int stack[MAX];
void push(char);
void pop();
void main()
{
    int i,choice;
    char s[MAX],b;
    while(1)
    {
        cout<<"1.Input String"<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter String:"<<endl;
            cin>>s;
            for(i=0;s[i]!='\0';i++)
            {
                b=s[i];
                push(b);
            }
            for(i=0;i<(strlen(s)/2);i++)
            {
                if(stack[top]==stack[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    cout<<s<<"is not palindrome"<<endl;
                    break;
                }
            }
            if((strlen(s)/2)==front)
            {
                cout<<s<<"is Palindrome"<<endl;
                front=0;
                top=-1;
                break;
            }
        case 2:
            exit(0);
        default:
            cout<<"Enter Correct Choice"<<endl;
        }
    }
}
void push(char a)
{
    top++;
    stack[top]=a;
}
void pop()
{
    top--;
}
