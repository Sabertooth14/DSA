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

//Iterative
int add(struct node *q)
{
    int total=0;
    while(q)
    {
        total+=q->data;
          q=q->next;
    }
     return total;       
}
int main()
{
    struct node *temp;
    int a[]={3,5,33,66,21};
    create(a,5);
    printf("Sum is: %d ",add(first));
    return 0;
}