#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root=NULL,*temp=NULL,*t1,*t2;
void delete1();
void insert();
void delete();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postoredr(struct btnode *t);
void search1(struct btnode *t,int data);
int smallest(struct btnode *t);
int largest(struct btnode *t);
int flag=1;
void main()
{
    int ch;
    cout<<"OPERATIONS"<<endl;
    cout<<"1.Insert An Element into tree"<<endl;
    cout<<"2.Delete An Element from tree"<<endl;
    cout<<"3.Inorder Traversal"<<endl;
    cout<<"4.Preorder Tarversal"<<endl;
    cout<<"5.Postorder Tarversal"<<endl;
    cout<<"6.Exit"<<endl;
    while(1)
    {
        cout<<"Enter Choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            preorder(root);
            break;
        case 5:
            postorder(root);
            break;
        case 6:
            exit(0);
        default:
            cout<<"Wrong Choice"<<endl;
            break;
        }
    }
}
void insert()
{
    create();
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        search(root);
    }
}
void create()
{
    int data;
    cout<<"Enter Data to be inserted"<<endl;
    cin>>data;
    temp=(struct btnode*)malloc(1*sizeof(struct btnode));
    temp->value=data;
    temp->l=temp->r=NULL:

}
void search(struct btnode *t)
{
    if((temp->value>t->value)&&(t->!=NULL))
        search(t->r);
    else if((temp->value>t->value)&&(t->NULL))
        t->r=temp;
    else if((temp->value<t->value)&&(t->!=NULL))
        search(t->l);
    else if((temp->value<t->value)&&(t->=NULL))
        t->temp;

}
