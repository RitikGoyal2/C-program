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

void search(struct Node *p, int n)
{
    int count=0;
    while(p!=NULL)
    {
    if(n==p->data)
    {
        break;
    }
    p=p->next;
    count++;
    }
    if(count==8)
   { 
   cout<<"No";
   }
   else 
   {
   cout<<"present";
   }
}


void issorted(struct Node *p)
{
    struct Node *last;
    last=p->next;
    int count=0;
    while(p->next!=NULL)
    {
    if(p->data<last->data)                 // linked list is sorted or not ;;
    {
        count++;
        p=p->next;
        last=last->next;
    }
    else 
    {  
          break;
    }
    }

    if(count==7)               // 7= no of (nodes)-1 in the linked list ;
    {
        cout<<"sorted";
    }
    else 
    {
        cout<<"Not sorted";
    }
}






struct Node * search1(struct Node *p,int n)
{
    while(p!=NULL)
    {
        if(n==p->data)
        {                                 // Another function for search;
        return p;
        }
        p=p->next;
    }
    return NULL;
}
int main()
{

    struct Node *temp;
    int A[]={1,2,3,4,28,31,80,90};
    create(A,8);
    // search(first,0);
    // issorted(first);
    temp = search1(first,8);
    if(temp)
    {
        cout<<"Yes fount : "<<temp->data;
    }
    else 
    {
        cout<<"Not found";
    }
    return 0;
}