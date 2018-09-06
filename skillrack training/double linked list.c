#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
}*head,*tail;

insert(int val)
{
   struct node *newnode=malloc(sizeof(newnode));
   newnode->data=val;
   if(head==NULL)
   {
       head=tail=newnode;
       head->next=NULL;
       head->pre=NULL;
      // printf("%d ",head->data);
   }
   else
   {
       struct node *temp=malloc(sizeof(temp));
       temp=tail;
       tail->next=newnode;
       tail=newnode;
       tail->next=NULL;
       tail->pre=temp;
        //printf("%d ",tail->data);
   }
}
display()
{

    struct node *temp=malloc(sizeof(temp));
    temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->pre;
    }
}

main()
{
    head=NULL,tail=NULL;
    int n,val;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&val);
        insert(val);
    }
    display();
}

