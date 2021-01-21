#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int list[30],size,temp,i,j;
    cout<<"Enter The Size Of The List"<<endl;
    cin>>size;
    cout<<"Enter The Elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>list[i];
    }
    selection(list,0,0,size,1);
    cout<<"The Sorted list in ascending Order"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<list[i]<<endl;
    }
    return 0;
}
void selection(int list[],int  i,int j,int size,int flag)
{
    int temp;
    if(i<size-1)
    {
        if(flag)
        {
            j=i+1;
        }
        if(j<size)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
            selection(list,i,j+1,size,0);
        }
        selection(list,i+1,0,size,1);
    }
}
