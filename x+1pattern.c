
 int n,arr[50],count=0;
 shift()
 {
     for(int i=1;i<=n;i++)
     {
         if(arr[i]==arr[i+1]&& arr[i]>0)
         {
             arr[i]=arr[i]+1;
             arr[i+1]=-1;
             count =1;
             printf("%d - %d\n",arr[i],arr[i+1]);
         }
       else  if(arr[i+1]==-1 && arr[i]!=-1)
         {
             for(int j=i;j<=n;j++)
             {
                 if(arr[i]==arr[j])
                 {
                     arr[i]=arr[i]+1;
                     arr[j]=-1;
                     count=1;
                     break;
                 }
             }
         }
     }
     if(count==1)
     {
         count=0;
         return 1;
     }
     else
     {
         return 0;
     }
 }
main()
{
    int flag=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(flag)
    {
        flag=shift();

    }
     for(int i=1;i<=n;i++)
       {
        if(arr[i]!=-1)
       printf("%d ",arr[i]);

     }
    printf("\n");

}
