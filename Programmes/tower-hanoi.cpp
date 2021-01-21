#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void towers(int,char,char,char);
int main()
{
    int num;
    cout<<"Enter The Numbers of Disks"<<endl;
    cin>>num;
    cout<<"The Sequence of Tower of Hanoi"<<endl;
    towers(num,'A','C','B');
    return 0;
}

void towers(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
    {
        cout<<frompeg<<topeg<<endl;
        return;
    }
    towers(num-1,frompeg,auxpeg,topeg);
    cout<<num<<frompeg<<topeg<<endl;
    towers(num-1,auxpeg,topeg,frompeg);
}
