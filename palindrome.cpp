#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std ;


void palindrome(char A[])
{
int count =0;
for(int i=0,j=strlen(A)-1;i<=j;i++,j--)
{
  
    if(A[i]== A[j])
    {
    continue;
    }
    else
    { 
    count++;
    break;
    }
}
if(count)
{
printf("No it is not an palindrome ");
}
else 
{
printf(" Yes it is a palindrome ");
}

}

int main()
{
char A[20] ;
printf("Enter the String Name : ");
gets(A);
palindrome(A);
    return 0;
}