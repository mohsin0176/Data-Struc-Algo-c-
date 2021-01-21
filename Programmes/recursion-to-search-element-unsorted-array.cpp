#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int search(int[],int,int);
int main()
{
    int size,index,key;
    int list[20];
    int count=0;
    int i;
    cout<<"Enter Size of The List"<<endl;
    cin>>size;
    index=size;
    cout<<"Print The list"<<endl;
    for(i=0;i<size;i++)
    {
        list[i]=rand()%size;
        cout<<list[i]<<endl;
    }
    cout<<"Enter The Key To Search"<<endl;
    cin>>key;
    while(index>0)
    {
        index=search(list,index-1,key);
        cout<<index+1<<endl;
        count++;
    }
    if(!count)
    {
        cout<<"Key Not Found"<<endl;
        return 0;
    }
}
int search(int array[],int size,int key)
{
    int location;
    if(array[size]==key)
    {
        return size;
    }
    else if(size==-1)
    {
        return -1;
    }
    else
    {
        return (location=search(array,size-1,key));
    }
}
