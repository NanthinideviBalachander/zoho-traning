main()
{
    int n,m,num[50],count=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=n;i++)
    {

        for(int j=i+1;j<=n;j++)
        {
            if((num[i]+num[j])%m==0)
              count++;

        }
    }
    printf("%d",count);

}
