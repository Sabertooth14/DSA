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
/*struct node* display(struct node *q)
{
    while(q!=NULL)
    {
        printf("%d ", q->data);
        q=q->next;
    }
}*/

void rdisplay(struct node *q)
{
    if (q!=NULL){
         rdisplay(q->next);
        printf("%d ",q->data);  //In reverse order
    }
}

int main()
{
    struct node *temp;
    int a[]={4,7,48,82,8};
    create(a,5);
rdisplay(first);
return 0;
}