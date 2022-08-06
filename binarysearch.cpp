#include<stdio.h>
#include<iostream>
using namespace std ;



struct Array 
{
    int A[10];
    int size ;
    int length;
};

int bs(int a[], int l, int h, int key)
{
   
    int mid ;
    if(l<=h)
    {
       mid=(l+h)/2;
       if(key== a[mid])
       {
        return mid;
       }
       else if (key<a[mid])
       {
        return bs(a, l,mid-1,key);
       }
       else 
       {
        return bs(a,mid+1,h,key);
       }
    }
    return -1;
}
int main()
{

struct Array arr ={ {1,2,3,4,5,6,7,10,9} ,9,9};

printf("%d",bs(arr.A,0,arr.length,1));

    return 0;
}