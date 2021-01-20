#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define MAX 10
using namespace std;
int list[MAX]={10,14,20,14,52,36,58,98,78,15};
int find(int data)
{
    int lo=0;
    int hi=MAX-1;
    int mid=-1;
    int comparisons=-1;
    int index=-1;
    while(lo<=hi)
    {
        cout<<comparisons<<endl;
        cout<<lo<<list[lo]<<lo<<endl;
        cout<<hi<<list[hi]<<hi<<endl;
        comaprisons++;
        mid=lo+(((double)(hi-lo)/(list[hi])-list[lo]))*(data-list[o]));
        cout<<mid<<endl;
        if(list[mid]==data)
        {
            index=mid;
            break;
        }
        else
        {
            if(list[mid]<data)
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
    }
    cout<<--comparisons<<endl;
    return index;
}

int main()
{
    int location=find(33);
    if(location!=-1)
    {
        cout<<location+1<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}
