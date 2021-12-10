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

// Iterative
int count(struct node *q)
{
    int c=0;
    while(q!=NULL)
    {
        c++;
        q=q->next;
    }
    return c;
}

int main()
{
    struct node *temp;
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,n);
   printf("length is %d ", count(first))  ;
return 0;
}