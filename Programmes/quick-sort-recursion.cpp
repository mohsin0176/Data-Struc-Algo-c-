#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void quicksort(int[],int,int);
int main()
{
    int list[50];
    int size,i;
    cout<<"Enter The Number Of Elements"<<endl;
    cin>>size;
    cout<<"Enter The Elements to be sorted"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<list[i]<<endl;
    }
    cout<<"\n"<<endl;
    return 0;
}

void quicksort(int list[],int low,int high)
{
    int pivot,i,j,temp;
    if(low<high)
    {
        pivot=low;
        i=low;
        j=high;
        while(i<j)
        {
            while(list[i]<=list[pivot]&&i<=high)
            {
                i++;
            }
            while(list[j]>list[pivot]&&j>=low)
            {
                j--;
            }
            if(i<j)
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
        temp=list[j];
        list[j]=list[pivot];
        list[pivot]=temp;
        quicksort(list,low,j-i);
        quicksort(list,j+1,high);


    }
}
