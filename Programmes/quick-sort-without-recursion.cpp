#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n"<<endl;
}
int main()
{
    int arr[]={45,12,30,21,14,5,12,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    cout<<"Sorted Array"<<endl;
    printArray(arr,n);
    return 0;
}
