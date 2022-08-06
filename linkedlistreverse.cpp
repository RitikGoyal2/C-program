#include<iostream>
using namespace  std ;


struct Node
{
    int data;
    struct Node *next;

}*first =NULL;

void create(int A[],int n )
{
   struct Node *t, *last;
    
   first = new Node ;
   first->data=A[0];
   first->next= NULL;
   last=first;
   
   for(int i=1;i<n;i++)
   {
    t=new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
   }
}
int count=0;
int sum =0;
void reversedisplay(struct Node *p)
{   
    if(p!=NULL)
    {
     count++;
     sum = sum+p->data;
     reversedisplay(p->next);
     cout<<p->data;
    }
    else 
    {

        cout<<"No of nodes are in the linked list : "<<count<<"\n";
        cout<<"Sum of nodes are in the linked list : "<<sum<<"\n";
    }
}

int main()
{
  
  int A[]={2,3,4,5,6,7};
  create(A,6);
  reversedisplay(first);


    return 0;
}