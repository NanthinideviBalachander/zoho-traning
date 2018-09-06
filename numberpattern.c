main()
{
    int num;
    scanf("%d",&num);
    int range=(num*2)-1;
    int end=range;
    int x=range;
    int y=range;
    int n=1,m=1;
    int matrix[range][range];
    for(int k=num;k>=1;k--)
    {
        for(int i=n;i<=x;i++)
       {
        for(int j=m;j<=y;j++)
        {
           matrix[i][j]=k;
        }
       }
       x--;
       y--;
       n++;
       m++;

    }
    for(int i=1;i<=range;i++)
    {
        for(int j=1;j<=range;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}
