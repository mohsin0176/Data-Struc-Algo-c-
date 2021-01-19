#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main()
{
    int key,size,i;
    int list[25];
    cout<<"Enter Size of a list"<<endl;
    cin>>size;
    cout<<"Generating Random Numbers"<<endl;
    for(i=0;i<size;i++)
    {
        list[i]=rand()%100;
        cout<<list[i];
    }
    bubble_sort(list,size);
    cout<<"\n"<<"\n"<<endl;
    cout<<"Enter Key To Search"<<endl;
    cin>>key;
    binary_search(list,0,size,key);
}
void bubble_sort(int list[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}

void binary_search(int list[],int lo,int hi,int key)
{
    int mid;
    if(lo>hi)
    {
        cout<<"Key Not Found"<<endl;
        return;
    }
    mid=(lo+mid)/2;
    if(list[mid]==key)
    {
        cout<<"Key Found"<<endl;
    }
    else if(list[mid]>key)
    {
        binary_search(list,lo,mid-1,key);
    }
    else if(list[mid]<key)
    {
        binary_search(list,mid+1,hi,key);
    }
}
