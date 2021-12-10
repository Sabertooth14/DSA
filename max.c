#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n)
{
    int i;
    struct node *p,*last;
    first=(struct node *)malloc(sizeof(struct node ));
    first->data=a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node ));
        p->data=a[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
}

//recursive
int max(struct node *q)
{
    int m=0;
    if (q==NULL)
   { return 0;}
  m=max(q->next);
   return m>q->data?m:q->data;
}

int main()
{
    struct node *temp;
    int a[]={3,55,6,2,66};
    create(a,5);
    printf("max is %d ", max(first));
    return 0;

}