#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 struct node
 {
     struct node *prev;
     int n;
     struct node *next;
 }*h,*temp,*temp1,*temp2,*temp4;
void insert1();
void insert2();
void insert3();
void traversebeg();
void traverseend(int);
void sort();
void search();
void update();
void delete();
void deleteatbeg();
void deleteatEnd();
int count=0;
void main()
{
    int ch;
    h=NULL;
    temp=temp1=NULL;
    cout<<"1.Insert at Beginning"<<endl;
    cout<<"2.Insert at End"<<endl;
    cout<<"3.Insert at position i"<<endl;
    cout<<"4.Delete at beginning"<<endl;
    cout<<"5.Delete at end"<<endl;
    cout<<"6.Delete at position i"<<endl;
    cout<<"7.Display from beginning"<<endl;
    cout<<"8.Display from End"<<endl;
    cout<<"9.Search for element"<<endl;
    cout<<"10.sort the list"<<endl;
    cout<<"11.Update an element"<<endl;
    cout<<"12.Exit"<<endl;
    while(1)
    {
        cout<<"Enter Choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            insert1();
            break;
        case 2:
            insert2();
            break;
        case 3:
            insert3();
            break;
        case 4:
            deleteatbeg();
            break;
        case 5:
            deleteatEnd();
            break;
        case 6:
            delete();
            break;
        case 7:
            traversebeg();
            break;
        case 8:
            temp2=h;
            if(temp2==NULL)
            {
                cout<<"List Empty to display"<<endl;
            }
            else
            {
                cout<<"Reverse Order of Linked list is:"<<endl;
                traverseend(temp2->n);
            }
            break;
            break;
        case 9:
            search();
            break;
        case 10:
            sort();
            break;
        case 11:
            update();
            break;
        case 12:
            exit(0);
        default:
            cout<<"Wrong Choice of Menu"<<endl;


        }
    }
}

void create()
{
    int data;
    temp=(struct node*)malloc(1*sizeof(struct node));
    temp->prev=NULL;
    temp->next=NULL;
    cout<<"Enter Value to node"<<endl;
    cin>>data;
    temp->n=data;
    count++;

}

void insert1()
{
    if(h==NULL)
    {
        create();
        h=temp;
        temp1=h;
    }
    else
    {
        create();
        temp->next=h;
        h->prev=temp;
        h=temp;
    }
}

 void insert2()
 {
     if(h==NULL)
     {
         create();
         h=temp;
         temp1=h;
     }
     else
     {
         create();
         temp1->next=temp;
         temp->prev=temp1;
         temp1=temp;
     }
 }

 void insert3()
 {
     int pos,i=2;
     cout<<"Enter Position to be inserted"<<endl;
     cin>>pos;
     temp2=h;
     if((pos<1)||(pos>=count+1))
     {
         cout<<"Position out of range to insert"<<endl;
         return;
     }
     if((h==NULL)&& (pos!=1))
     {
         cout<<"Empty List can not insert other than 1st position"<<endl;
         return;
     }
     if((h==NULL)&&(pos==1))
     {
         create();
         h=temp;
         temp1=h;
         return;
     }
     else
     {
         while(i<pos)
         {
             temp2=temp2->next;
             i++;
         }
         create();
         temp->prev=temp2;
         temp->next=temp2->next;
         temp2->next->prev=temp;
     }
 }
 void delete()
 {
     int i=1,pos;
     cout<<"Enter The Position to be deleted"<<endl;
     cin>>pos;
     temp2=h;
     if((pos<1)||(pos>=count+1))
     {
         cout<<"Position out of range to delete"<<endl;
         return;
     }
     if(h==NULL)
     {
         cout<<"Empty List no Elements to Delete"<<endl;
         return;
     }
     else
     {
         while(i<pos)
         {
             temp2=temp2->next;
             i++;
         }
         if(i==1)
         {
             if(temp2->next==NULL)
             {
                 cout<<"Node Delete From List"<<endl;
                 free(temp2);
                 temp2=h=NULL;
                 return;
             }
         }
         if(temp2->next==NULL)
         {
             temp2->prev->next=NULL;
             free(temp2);
             cout<<"Node Delete From List"<<endl;
             return;
         }
         temp2->next->prev=temp2->prev;
         if(i!=1)
            temp2->prev->next=temp2->prev;
         if(i==1)
            h=temp2->next;
            cout<<"Node deleted"<<endl;
            free(temp2);
     }
     count--;
 }

 void traversebeg()
 {
     temp2=h;
     if(temp2==NULL)
     {
         cout<<"List Empty To Display"<<endl;
         return;
     }
     cout<<"Linked List Element from Beginning"<<endl;
     while(temp2->next != NULL)
     {
         cout<<temp2->n;
         temp=temp2->next;
     }
     cout<<temp2->n;
 }

 void traverseend(int i)
 {
     if(temp2!=NULL)
     {
         i=temp2->n;
         temp2=temp2->next;
         traverseend(i);
         cout<<i;
     }
 }

 void search()
 {
     int data,count=0;
     temp2=h;
     if(temp2==NULL)
     {
         cout<<"List Empty to search For Data"<<endl;
         return;
     }
     cout<<"Enter value to Search"<<endl;
     cin>>data;
     while(temp2!=NULL)
     {
         if(temp2->n==data)
         {
             cout<<count+1;
             return;
         }
         else
         {
             temp2=temp2->next;
             count++;
         }
         cout<<"Not Found"<<endl;
     }

     void update()
     {
         int data,data1;
         cout<<"Enter node data to be update"<<endl;
         cin>>data;
         cout<<"Enter New Data"<<endl;
         cin>>data1;
         temp2=h;
         if(temp2!==NULL)
         {
             cout<<"List Empty node to update"<<endl;
             return;
         }
         while(temp2!=NULL)
         {
             if(temp2->n==data)
             {
                 temp2->n=data1;
                 traversebeg();
                 return;
             }
             else
             {
                 temp2=temp2->next;
             }
             cout<<data;
         }
     }

     void sort()
     {
         int i,j,x;
         temp2=h;
         temp4=h;
         if(temp2==NULL)
         {
             cout<<"List Empty"<<endl;
             return;
         }
         for(temp2=h;temp2!=NULL;temp2=temp2->next)
         {
             for(temp4=temp2->next;temp4!=NULL;temp4=temp4->next)
             {
                 if(temp2->n>temp4->n)
                 {
                     x=temp2->n;
                     temp2->n=temp4->n;
                     trmp4->x;

                 }
             }
         }
         traversebeg();
     }
     void deleteatEnd()
     {
         if(h==NULL)
         {
             cout<<"List Empty"<<endl;
             return;
         }
         temp2=h;
         while(temp2->next!=NULL)
         {
             temp2=temp2->next;
             cout<<"Node deleted"<<endl;
             free(h);
             temp2->prev->next=NULL;
             count--;
         }
     }

     void deleteatbeg()
     {
         if(h==NULL)
         {
             cout<<"List Empty"<<endl;
             return;
         }
         temp2=h;
         h=h->next;
         h->prev=NULL;
         cout<<"Node Deleted"<<endl;
         free(temp2);
         count--;
     }

 }
