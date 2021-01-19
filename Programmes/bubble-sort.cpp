#include<bits/stdc++.h>
#include<iostream>
#define MAXSIZE 10
using namespace std;
void main()
{
    int array[MAXSIZE];
    int i,j,num,temp;
    cout<<"Enter The Value of num"<<endl;
    cin>>num;
    cout<<"Enter Elements One By One"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>array[i];
    }
    cout<<"Input Array is:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<array[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<(num-i-1);j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array is:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<array[i];
    }
}
