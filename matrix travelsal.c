main()
{
    int n,matrix[50][50],j=1,max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       max=i;
        for( j=1;j<=n;j++)
        {
            matrix[i][j]=max;
            max+=n;
        }
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
           {
          printf("%d ",matrix[i][j]);
          }
           printf("\n");
          }

}
