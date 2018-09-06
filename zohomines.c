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
    if(matrix[i][j-1]<42 && matrix[i][j-1]!=0 )
    {
        sum+=matrix[i][j-1];
       // printf("%d-%d",i,j);
        //matrix[i][j-1]=0;
    }
    if(matrix[i][j+1]<42 && matrix[i][j+1]!=0)
    {
        sum+=matrix[i][j+1];
      // printf("%d-%d",i,j);
       //matrix[i][j+1]=0;
    }
    if(matrix[i-1][j+1]<42 && matrix[i-1][j+1]!=0)
    {
        sum+=matrix[i-1][j+1];
        //printf("%d-%d",i,j);
        //matrix[i-1][j+1]=0;
    }
    if(matrix[i-1][j]<42 && matrix[i-1][j]<42 !=0 )
    {
        sum+=matrix[i-1][j];
          //      printf("%d-%d",i,j);

        //matrix[i-1][j]=0;
    }
    if(matrix[i-1][j-1]<42 && matrix[i-1][j-1]!=0)
    {
        sum+=matrix[i-1][j-1];
            //    printf("%d-%d",i,j);

        //matrix[i-1][j-1]=0;
    }
    if(matrix[i+1][j-1]<42 && matrix[i+1][j-1]!=0)
    {
        sum+=matrix[i+1][j-1];
              //  printf("%d-%d",i,j);

       // matrix[i+1][j-1]=0;
    }
    if(matrix[i+1][j]<42 && matrix[i+1][j]!=0)
    {
        sum+=matrix[i+1][j];
                //printf("%d-%d",i,j);

       // matrix[i+1][j]=0;
    }
    if(matrix[i+1][j+1]<42 && matrix[i+1][j+1]!=0)
    {
        sum+=matrix[i+1][j+1];
                //printf("%d-%d",i,j);

       // matrix[i+1][j+1]=0;
    }
    return sum;
}

main()
{
    int i,j,max[10]={0},sum=0,irow[10]={0},icol[10]={0},temp=0,k;
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

    for(i=1;i<mines;i++)
    {
        sum=kill(row[i],col[i]);
        if(sum>max[i])
        {
            max[i]=sum;
            irow[i]=row[i];
            icol[i]=col[i];
        }
    }
    for(i=1;i<=mines;i++)
    {
        for(j=1;j<=mines;j++)
        {
            if(max[i]>max[j])
            {
               temp=max[i];
               max[i]=max[j];
               max[j]=temp;
               temp=irow[i];
               irow[i]=irow[j];
               irow[j]=temp;
               temp=icol[i];
               icol[i]=icol[j];
               icol[j]=temp;
            }
        }
    }
    for(i=1;i<=k;i++)
    {
       // printf("%d-%d-%d",max[i],irow[i],icol[i]);
     printf("Bomb to be Exploded : (%d,%d)\n",irow[i],icol[i]);
     ksum+=max[i];
    }

    printf("Number of ants killed: %d ",ksum);
}
