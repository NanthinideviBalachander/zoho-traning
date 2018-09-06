int rear=-1,front=-1,count=1;
char queue[50];
enqueue(char arr)
{
    queue[++rear]=arr;
    //printf("%c",queue[rear]);
}
dequeue(char arr)
{
    printf("%c",queue[front++]);
}
display()
{
    front=0;
    while(rear>front)
    {
        printf("%c",queue[front]);
        front++;
    }
}
disrev()
{
    rear--;
    while(rear>front)
    {
        printf("%c",queue[rear]);
        rear--;
    }
}
disnum()
{
    front=0;
    while(rear>front)
    {
        printf("%c%d",queue[front],front+1);
        front++;
    }
}
numenqueue(char arr)
{
    queue[++rear]=arr;
    queue[++rear]=count;
    count++;

}
void main()
{
    char arr[50];
    scanf("%s",arr);
    int len=strlen(arr);
    /*for(int i=0;i<=len;i++)
    {
        enqueue(arr[i]);
    }*/
    //display();
    //disrev();
   // disnum();
    for(int i=0;i<=len;i++)
    {
        numenqueue(arr[i]);
    }
     display();
}
