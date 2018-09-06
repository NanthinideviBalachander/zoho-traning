int size,row[10],col[10],mines=0,ksum=0;
 int matrix[50][50]={0},index1=0,index2=0,maxsum=0;
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
clear(int i,int j)
{
    printf("%d %d",i,j);
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
     matrix[i][j]=0;
}
kill(int i,int j,int sum)
{
    index1=0;
    index2=0;
    if(matrix[i][j-1]<42  )
    {
        sum+=matrix[i][j-1];
    }
   else if(matrix[i][j-1]==42  )
    {
        index1=i;
        index2=j-1;

    }
    if(matrix[i][j+1]<42 )
    {
        sum+=matrix[i][j+1];
    }
    else if(matrix[i][j+1]==42 )
    {
        index1=i;
        index2=j+1;
    }
    if(matrix[i-1][j+1]<42 )
    {
        sum+=matrix[i-1][j+1];
    }
   else if(matrix[i-1][j+1]==42 )
    {
        index1=i-1;
        index2=j+1;
    }
    if(matrix[i-1][j]<42 )
    {
        sum+=matrix[i-1][j];

    }
  else if(matrix[i-1][j]==42 )
    {
        index1=i-1;
        index2=j;
    }
    if(matrix[i-1][j-1]<42 )
    {
        sum+=matrix[i-1][j-1];

    }
    else if(matrix[i-1][j-1]==42 )
    {
        index1=i-1;
        index2=j-1;
   }
    if(matrix[i+1][j]<42 )
    {
        sum+=matrix[i+1][j];

    }
    else if(matrix[i+1][j]==42 )
    {
        index1=i+1;
        index2=j;

    }
    if(matrix[i+1][j+1]<42 )
    {
        sum+=matrix[i+1][j+1];

    }
    else if(matrix[i+1][j+1]==42 )
    {
        index1=i+1;
        index2=j+1;

    }
    //maxsum=kill(index1,index2,sum);
    //printf("%d\n",sum);
    return sum;
}
main()
{
    int i,j,max=0,sum=0,irow=0,icol=0,temp=0,k;
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
     for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);

        }
        printf("\n");
    }
    for(i=1;i<=mines;i++)
    {
        sum=kill(row[i],col[i],0);
        //printf("%d",i);
        //clear(row[i],col[i]);
        matrix[row[i]][col[i]]=0;
         while(index1>0||index2>0)
        {
            matrix[row[i]][col[i]]=0;
             printf("%d-%d\n",index1,index2);
              sum+=kill(index1,index2,0);
            printf("%d-%d\n",index1,index2);
             // index1=0;
             // index2=0;
        }
        //printf("%d%d\n",row[i],col[i]);
        if(sum>max)
        {
           //printf("%d-%d-%d\n",max,irow,icol);
            max=sum;
            irow=row[i];
            icol=col[i];
        }
    }
    printf("Bomb to be Exploded : (%d,%d)\n",irow,icol);
    printf("Number of ants to be killed %d",sum);
}
