#include<iostream>
#include<stdio.h>
using namespace std;



// double e(int x , int n)
// {
//     static double  p=1,f=1;
//     double r;
//     if(n==0)
//     {
//        return 1;
//     }
//     else 
//     {
//        r= e(x,n-1);
//        p=p*x;
//        f=f*n;
//        return r+p/f;
//     }
// }



// Horner's rule is an efficient algorithm for computing the value of a polynomial



// double e(int x , int n)
// {
//     static double s=1;
//     if(n==0)
//     {
//        return s;
//     }
//     else 
//     {
//     s=1+x*s/n;
//     return e(x,n-1);
//     }
// }


//  using iterative 


double e(int x , int n)
{
 double s =1;
 double den =1,num=1;
 int i;
 for(i=1;i<=n;i++)
 {
    num*=x;
    den*=i;
    s+=num/den;
 }
 return s;
}

int main()
{
    
    printf("%lf",e(1,10));
    return 0;
}