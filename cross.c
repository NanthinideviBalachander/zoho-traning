main()
{
    int num,i=1,n[10],arr[10],count=0;
    scanf("%d",&num);
    while(num>0)
    {
        n[i]=num%10;
        count++;
        num/=10;
        printf("%d",n[i]);
        i++;
    }
    for(i=1;i<=count;i++)
    {
        arr[i]=n[i];
        printf("%d",arr[i]);
    }
   /* int n=5,mid=5/2+1;
    for(int i=1;i<=5;i++)
    {
        int k=i;
        while(--k)
        {
            printf(" ");
        }
       printf("%d",i);
       for(int k=i;k<=n;k++)
       {
           if(k==n&&k==mid)
              continue;
           if(k==n)
            printf("%d",n);
           else
            printf(" ");
       }
       n--;
       printf("\n");

    }*/
}
