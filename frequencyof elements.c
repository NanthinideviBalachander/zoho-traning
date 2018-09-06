 main()
{
     int n,arr[50],count[50]={1},g=1,var[50]={0};

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]!=0)
        {
             for(int j=i+1;j<=n;j++)
          {
            if(arr[i]==arr[j])
            {
                count[g]=count[g]+1;
                arr[j]=0;
            }
          }
          count[g]=count[g]+1;
          var[g]=arr[i];
          g++;
        }
    }
    for(int i=1;i<n;i++)
    {
       // printf("%d-%d\n",arr[i],count[i]);
       for(int j=i+1;j<=n;j++)
       {
            if(count[i]<count[j])
            {
                int temp=count[i];
                count[i]=count[j];
                count[j]=temp;

                temp=var[i];
                var[i]=var[j];
                var[j]=temp;
            }
       }
    }
 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=count[i];j++)
     {
        printf("%d ",var[i]);

     }
 }
}
