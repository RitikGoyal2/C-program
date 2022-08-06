#include<iostream>
#include<stdio.h>

using namespace std ;

struct Array
{
int A[10];
int length ;
};

char sorted(struct Array arr)
{

    for(int i=0;i<arr.length-1;i++)
    {
     
    if(arr.A[i]>arr.A[i+1])
    {
        return false ;
    }

    }
    return true;
}

int main()
{
struct Array arr={{1,2,5,6,8,5},6};

printf("%d",sorted(arr));
    return 0;
}