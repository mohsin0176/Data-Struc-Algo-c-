#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 7
void insertion_sort(int *);
void main()
{
    int i,a[MAX];
    cout<<"Enters Element To Be Sorted"<<endl;
    for(i=0;i<MAX;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a);
    cout<<"Sorted Elements are"<<endl;
    for(i=0;i<MAX;i++)
    {
        cout<<a[i];
    }
}
void insertion_sort(int* x)
{
    int temp,i,j;
    for(i=1;i<MAX;i++)
    {
        temp=x[i];
        j=i-1;
        while(temp<x[j]&&j>=0)
        {
            x[j+1]=x[j];
            j=j-1;
        }
        x[j+1]=temp;
    }
}
