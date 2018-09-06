int size,row[10],col[10],mines=0;
 int matrix[50][50]={0};
mine(int i,int j)
{
    if(matrix[i][j]==42)
         return;
    if(matrix[i][j-1]==42)
    {
        matrix[i][j]++;
    }
    if(matrix[i][j+1]==42)
    {
        matrix[i][j]++;
    }
    if(matrix[i-1][j]==42 )//&& matrix[i-1][j])
    {
        matrix[i][j]++;
    }
    if(matrix[i+1][j]==42)
    {
        matrix[i][j]++;
    }
    if(matrix[i-1][j-1]==42)
    {
        matrix[i][j]++;
    }
    if(matrix[i-1][j+1]==42)
    {
        matrix[i][j]++;
    }
    if(matrix[i+1][j-1]==42)
    {
        matrix[i][j]++;
    }
    if(matrix[i+1][j+1]==42)
    {
        matrix[i][j]++;
    }
}
kill(int i,int j)
{
    int sum=0;
    if(matrix[i][j-1]<42)
    {
        sum+=matrix[i][j-1];
    }
    if(matrix[i][j+1]<42)
    {
        sum+=matrix[i][j+1];
    }
    if(matrix[i-1][j+1]<42)
    {
        sum+=matrix[i-1][j+1];
    }
    if(matrix[i-1][j]<42)
    {
        sum+=matrix[i-1][j];
    }
    if(matrix[i-1][j-1]<42)
    {
        sum+=matrix[i-1][j-1];
    }
    if(matrix[i+1][j-1]<42)
    {
        sum+=matrix[i+1][j-1];
    }
    if(matrix[i+1][j]<42)
    {
        sum+=matrix[i+1][j];
    }
    if(matrix[i+1][j+1]<42)
    {
        sum+=matrix[i+1][j+1];
    }
    return sum;
}
main()
{
    int i,j,max=0,sum=0,irow=0,icol=0;
    scanf("%d",&size);
    printf("Enter the no. of mines\n");
    scanf("%d",&mines);
    for(i=1;i<=mines;i++)
    {
        printf("Enter the row and col\n");
        scanf("%d %d",&row[i],&col[i]);
        matrix[row[i]][col[i]]=42;
    }
    for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            mine(i,j);
        }
    }
    for(i=1;i<mines;i++)
    {
        sum=kill(row[i],col[i]);
        if(sum>max)
        {
            max=sum;
            irow=row[i];
            icol=col[i];
        }
    }
    for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);

        }
        printf("\n");
    }
    printf("Bomb to be Exploded : (%d,%d)\n",irow,icol);
    printf("Number of ants killed: %d ",max);
}
