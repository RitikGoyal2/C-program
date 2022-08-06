#include<iostream>
#include<stdio.h>
using namespace std ;


struct Array 
{
    int A[10];
    int size ;
    int length;
};
 
void display(struct Array arr)
{
   printf("your have entered ",arr.length ,"element");
  for(int i=0;i<arr.length;i++)
  {
    printf(" %d  ",arr.A[i]);
  }
}

void swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int search(struct Array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if (key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}

int main()
{

    struct Array arr;
    int i , n ;
    printf("Enter the size of array");
    scanf("%d",&arr.size);
    // arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("Enter the no of elements you want ");
    scanf("%d",&n);
    
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }

    arr.length=n;
  
    search(&arr,5);
    // display(arr);
}