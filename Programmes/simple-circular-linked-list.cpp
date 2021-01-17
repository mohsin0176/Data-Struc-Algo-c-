#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*head=NULL,*q,*t;
int count=0;
int main()
{

    int ch;
    void insert_beg();
    void insert_end();
    int insert_pos();
    void display();
    void delete_beg();
    void delete_end();
    int delete_pos();

    while(1)
    {
        cout<<"Singly Linked List"<<endl;
        cout<<"1.Insert at Begining\n";
        cout<<"2.Insert at End\n";
        cout<<"3.Insert at Pos\n";
        cout<<"4.Dispaly\n";
        cout<<"5.Delete at Begining\n";
        cout<<"6.Delete at End\n";
        cout<<"7.Delete at Pos\n";
        cout<<"8.Exit\n";
        cout<<"Enter Your choice\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            display();
            break;
        case 5:
            delete_beg();
            break;
        case 6:
            delete_end();
            break;
        case 7:
            delete_pos();
            break;
        case 8:
            cout<<"Wrong Choice"<<endl;
            break;
        }
    }
    return 0;
}

void insert_beg()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter Data"<<endl;
    cin>>num;
    t->data=num;
    count++;
    if(head==NULL)
    {
        t->next=NULL;
        head=t;
    }
    else
    {
        t->next=head;
        head=t;
    }

}

void insert_end()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter Data"<<endl;
    cin>>num;
    t->data=num;
    t->next=NULL;
        if(head==NULL)
        {
            head=t;
        }
        else
        {
            q=head;
            while(q->next!=NULL)
            {
            q=q->next;
            q->next=t;
            }

        }
}

int insert_pos()
{
    int pos,i,num;
    if(head==NULL)
    {
        cout<<"List Is Empty"<<endl;
        return 0;
    }
    t=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter Data:"<<endl;
    cin>>num;
    cout<<"Enter Position To Insert"<<endl;
    cin>>pos;
    t->data=num;
    q=head;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            cout<<"There Are Less Element"<<endl;
            return 0;
        }
        q=q->next;
    }
    t->next=q->next;
    q->next=t;
    return 0;
}

void display()
{
    struct node *t;
    t=head;
    if(t==NULL)
    {
        cout<<"List Empty"<<endl;
    }
    cout<<count;
    q=head;
    cout<<"The Linked List"<<endl;
    while(q!=NULL)
    {
        cout<<q->data;
        q=q->next;
    }
}

void delete_beg()
{
    if(head==NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        q=head;
        head=head->next;
        cout<<q->data;
        free(q);

    }
}
void delete_end()
{
    if(head==NULL)
    {
        cout<<"List Empty"<<endl;
    }
    else
    {
        q=head;
        while(q->next->next!=NULL)
        {
            q=q->next;
            t=q->next;
            q->next=NULL;
            cout<<t->data;
            free(t);
        }
    }
}

int delete_pos()
{
    int pos,i,data;
    if(head==NULL)
    {
        cout<<"List Empty"<<endl;
        return 0;
    }
    cout<<"Enter Position"<<endl;
    cin>>pos;
    if(pos==1)
    {
        q=head;
        head=head->next;
        cout<<q->data;
        free(q);
    }
    q=head;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            cout<<"There Are Less Elements"<<endl;
            return 0;
        }
        q=q->next;
    }
    t=q->next;
    q->next=t->next;
    cout<<t-data;
    free(t);
    return 0;
}
