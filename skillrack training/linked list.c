#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*head,*tail;

insert(int val)
{
   struct node *newnode=malloc(sizeof(newnode));
   newnode->data=val;
   if(head==NULL)
   {
       head=tail=newnode;
       head->next=NULL;
     //  printf("%d ",newnode->data);
   }
   else
   {
       tail->next=newnode;
       tail=newnode;
       tail->next=NULL;
      // printf("%d ",newnode->data);
   }
}
display()
{

    struct node *temp=malloc(sizeof(temp));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
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
