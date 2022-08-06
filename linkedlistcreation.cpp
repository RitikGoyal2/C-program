#include<iostream>
using namespace std ;
struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
   int i;
   struct Node *t,*last;
   first = new Node;
   first->data=A[0];
   first->next=NULL;
   last = first;

   
   for(int i=1;i<n;i++)
   {
    t= new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last =t;
   }
}

   void display(struct Node *p)
   {
    while(p!=NULL)
    {
        cout<<p->data;
        p =p->next;

    }
   }

void insertatbeg(struct Node *p , )

int main()
{
   int A[]={2,3,4,5,6,7};
   create(A,6);
   display(first);

    return 0;
}