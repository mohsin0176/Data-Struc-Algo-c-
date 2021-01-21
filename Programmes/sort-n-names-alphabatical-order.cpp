#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<bits/stdc++.h>
#define max 50
using namespace std;
int main()
{
    char name[10][8],tname[10][8],temp[8];
    int i,j,n;
    cout<<"Enter The Value"<<endl;
    cin>>n;
    cout<<"Enter Names"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>name[i];
        strcpy(tname[i],name[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    cout<<"Input Sorted Names"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<tname[i]<<name[i]<<endl;
    }
    return 0;
}
