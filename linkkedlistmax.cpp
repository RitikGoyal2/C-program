#include<iostream>
using namespace std ;


struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n )
{
    struct Node *t,*last;
    first = new Node ;
    first->next=NULL;
    first->data=A[0];
    last=first;
     
    for(int i=1;i<n;i++)
    {
        t = new Node ;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void max(struct Node *p)
{
    int max=0;
    while(p!=NULL)
    {
        if(max<p->data)
        {
            max=p->data;
            p=p->next;
        }
        else 
        {
         p=p->next;
        }
    }
    cout<<"max element : "<<max<<"\n";
    
}


void min(struct Node *p)
{
    struct Node *t;
    t=p;
    int min;
    min=p->data;
    t=t->next;
    while(t!=NULL)
    {
        if(min>t->data)
        {
            min=t->data;
        }
        else 
        {
         t=t->next;
        }
    }
    cout<<"min element : "<<min;
}


void display(struct Node *p)
{
    while(p!=NULL)
    {

        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int A[]={-2,59,4,27,10,1,80,9};
    create(A,8);
    display(first);
    max(first);
    min(first);
    return 0;
}