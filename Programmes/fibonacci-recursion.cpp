#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int Fibonacci(int);
int main()
{
    int n,c,i=0;
    cout<<"Enter The Numbers Of Term"<<endl;
    cin>>n;
    cout<<"Fibonacci Series of"<<"\t"<<n<<"\t"<<"is:"<<endl;
    for(c=1;c<=n;c++)
    {
        cout<<Fibonacci(i)<<endl;
        i++;
    }
    return 0;

}
int Fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
        {
        return (Fibonacci(n-1)+Fibonacci(n-2));
        }
}
