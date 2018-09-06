int size,row[10],col[10],mines=0,ksum=0;
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
    if(matrix[i][j-1]<42  )
    {
        sum+=matrix[i][j-1];
       // printf("%d-%d",i,j);
        //matrix[i][j-1]=0;
    }
    if(matrix[i][j+1]<42 )
    {
        sum+=matrix[i][j+1];
      // printf("%d-%d",i,j);
       //matrix[i][j+1]=0;
    }
    if(matrix[i-1][j+1]<42 )
    {
        sum+=matrix[i-1][j+1];

    }
    if(matrix[i-1][j]<42 )
    {
        sum+=matrix[i-1][j];

    }
    if(matrix[i-1][j-1]<42 )
    {
        sum+=matrix[i-1][j-1];

    }
    if(matrix[i+1][j-1]<42)
    {
        sum+=matrix[i+1][j-1];

    }
    if(matrix[i+1][j]<42 )
    {
        sum+=matrix[i+1][j];

    }
    if(matrix[i+1][j+1]<42 )
    {
        sum+=matrix[i+1][j+1];

    }
    //printf("%d\n",sum);
    return sum;
}
clear(int i,int j)
{
    if(matrix[i-1][j-1]<42)
        matrix[i-1][j-1]=0;
    if(matrix[i-1][j]<42)
        matrix[i-1][j]=0;
    if(matrix[i-1][j+1]<42)
        matrix[i-1][j+1]=0;
    if(matrix[i][j+1]<42)
        matrix[i][j+1]=0;
    if(matrix[i][j-1]<42)
        matrix[i][j-1]=0;
    if(matrix[i+1][j]<42)
        matrix[i+1][j]=0;
    if(matrix[i+1][j-1]<42)
        matrix[i+1][j-1]=0;
    if(matrix[i+1][j+1]<24)
        matrix[i+1][j+1]=0;

}
main()
{
    int i,j,max,sum=0,irow,icol,temp=0,k;
    scanf("%d",&size);
    printf("Enter the no. of mines\n");
    scanf("%d",&mines);
    for(i=1;i<=mines;i++)
    {
        printf("Enter the row and col\n");
        scanf("%d %d",&row[i],&col[i]);
        matrix[row[i]][col[i]]=42;
    }
    printf("Enter the value of K:\n");
    scanf("%d",&k);
    for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            mine(i,j);
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
for(j=1;j<=k;j++)
{
     max=0;
    for(i=1;i<mines;i++)
    {
        sum=kill(row[i],col[i]);
        //printf("%d%d\n",row[i],col[i]);
        if(sum>max)
        {
           // printf("%d-%d-%d\n",max,irow,icol);
            max=sum;
            irow=row[i];
            icol=col[i];
        }
    }
    printf("Bomb to be Exploded : (%d,%d)\n",irow,icol);

    ksum+=max;
    if(j==k)
    {
        printf("Number of ants to be killed %d",ksum);
       break;
    }
 clear(irow,icol);
 for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);

        }
        printf("\n");
    }
}
   // printf("Number of ants to be killed:",ksum);
}
