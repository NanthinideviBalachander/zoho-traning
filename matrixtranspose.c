main()
{
    int matrix[10][10],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int j=n;j>=1;j--)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}
