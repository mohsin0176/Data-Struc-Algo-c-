#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char stack[25];
int top=-1;
void push(char item)
{
    stack[++top]=item;
}
char pop()
{
    return stack[top--];
}
int precedence(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':
        return 2;
        break;
    case '*':
    case '/':
        return 3;
        break;
    case '^':
        return 4;
        break;
    case '(':
    case ')':
    case '#':
        return 1;
        break;
    }
}
int isOperator(char infix[],char postfix[])
{
    int i,symbol,j=0;
    stack[++top]='#';

    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(isOperator(symbol)==0)
        {
            postfix[j]=symbol;
            j++;
        }
        else
        {
            if(symbol=='(')
            {
                push(symbol);
            }
            else
            {
                if(symbol==')')
                {
                    while(stack[top]!='(')
                    {
                        postfix[j]=pop();
                        j++;
                    }
                    pop();
                }
                else
                {
                    if(precedence(symbol)>precedence(stack[top]))
                    {
                        push(symbol);
                    }
                    else

                    {
                        while(precedence(symbol)<=precedence(stack[top]))
                        {
                            postfix[j]=pop();
                            j++;
                        }
                        push(symbol);
                    }
                }
            }
        }
    }
    while(stack[top]!='#')
    {
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
}
int stack_int[25];
int top_int=-1;

void push_int(int item)
{
    stack_int[++top_int]=item;
}
char pop_int()
{
    return stack_int[top_int--];
}
int evaluate(char *postfix)
{
    char ch;
    int=0,operand1,operand2;
    while((ch=postfix[i++]!='\0'))
    {
        if(isdigit(ch))
        {
            push_int(ch-'0');
        }
        else
        {
            operand2=pop_int();
            operand1=pop_int();
            switch(ch)
            {
            case '+':
                push_int(operand1+operand2);
                break;
            case '-':
                push_int(operand1-perand2);
                break;
            case '*':
                push_int(operand1*operand2);
                break;
            case '/':
                push_int(operand1/operand2);
                break;
            }
        }
    }
    return stack_int[top_int];
}
void main()
{
    char infix[25]="1*(2+3)",postfix[25];
    convert(infix,postfix);
    cout<<"Infix Expression"<<infix<<endl;
    cout<<"Postfix Expression"<<postfix<<endl;
    cout<<"Evaluated Expression"<<evaluate(postfix)<<endl;
}
