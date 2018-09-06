main()
{

    int  arr[40][40],r,c;
    scanf("%d %d",&r,&c);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int from=1,to=c,cfrom=2;
    for(int i=1;i<c-1;i++)
    {
        for(int j=from;j<=r;j++)
        {
            printf("%d",arr[from][j]);
        }
        for(int j=from+1;j<c;j++)
        {
            printf("%d",arr[j][to]);
        }
        for(int j=r-1;j>=from;j--)
        {
            printf("%d",arr[to][j]);
        }
        for(int j=to-1;j>from;j--)
        {
            printf("%d",arr[j][from]);
        }
        from++;
        to--;
    }
}
