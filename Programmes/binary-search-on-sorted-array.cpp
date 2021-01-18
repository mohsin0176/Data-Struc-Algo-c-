#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void main()
{
    int array[10];
    int i,j,num,temp,keynum;
    int low,mid,high;
    cout<<"Enter the value of Number:"<<endl;
    cin>>num;
    cout<<"Enter The Elements one by one:"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>array[i];
    }
    cout<<"Input Array Elements are:"<<endl;
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
    cout<<"Enter The Element to be searched:"<<endl;
    cin>>keynum;
    low=1;
    high=num;
    do
    {
        mid=(low+high)/2;
        if(keynum<array[mid])
        {
                        high=mid-1;
        }

        else if
            {
            low=mid+1;
            }
    }
    while(keynum!=array[mid]&&low<=high);
    if(keynum==array[mid])
    {
        cout<<"Search Success"<<endl;
    }
    else
    {
        cout<<"Search Failed"<<endl;
    }

}
