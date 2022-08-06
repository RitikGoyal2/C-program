#include<iostream>
#include<stdio.h>
using namespace std;

int fab(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else 
    {
        return fab(n-1) +fab(n-2);
    }
}

int main()
{
    int r;
    r=fab(6);
    printf("%d\n",r);
    return 0;
}




