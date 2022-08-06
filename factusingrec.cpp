#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n )
{
    if (n>=0)
    {
        if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
    
        return n *fun(n-1);
    }
    }
    else 
    {
        return 0;
    }
    
}
int main()
{
    int r ;
    r = fun(-2);
    printf("%d",r);
    return 0;
}