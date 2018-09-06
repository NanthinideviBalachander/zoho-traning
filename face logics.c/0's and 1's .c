main()
{
    int n,arr[40],front=1,end;
    scanf("%d",&n);
    end=n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(front<=end)
    {
       if(arr[front]==0)
         front++;
       else if(arr[end]!=0)
        end--;
       else
       {
           int t=arr[front];
           arr[front]=arr[end];
           arr[end]=t;
           front++;
           end--;
       }

    }
     for(int i=1;i<=n;i++)
    {
        printf("%d",arr[i]);
    }

}
