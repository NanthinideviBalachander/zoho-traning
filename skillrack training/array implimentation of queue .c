/*int front =0,rear=0,queue[100];
insert()
{
    int data;
    scanf("%d",&data);
    if(rear==100)
        printf("Queue is full");
    else
    queue[rear++]=data;
}
display()
{
    if(rear==0)
        printf("Queue is empty");
    else
    {
        for(int i=0;i< rear;i++)
           printf("%d",queue[i]);
    }
}
poll()
{
    if(rear==0)
        printf("Queue is empty");
    else{
        printf("%d is deleted",queue[front]);
        for(int i=0;i<=rear;i++)
        {
            queue[i]=queue[i+1];
        }
    }
}
main()
{
    int choice;
    while(1)
    {
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:insert();break;
        case 2:poll();break;
        case 3:display();break;
        default:exit(0);
    }
    }
}*/

main()
{

    char *str;
    strcpy(str,"aaa");
    str=&str[0];
    printf("%s",str);
}
