int subsum[10]={0},k=1;
int matrix[10][10];
sub(int i1,int i2,int j1,int j2)
{
    for(int i=i1;i<=j1;i++)
    {
        for(int j=j1;j<=j2;j++)
        {
            subsum[k]+=matrix[i][j];
        }
    }
    printf("%d\n",subsum[k]);
    k++;

}
main()
{

    int rowsum=0,colsum=0,submat=0;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            scanf("%d",&matrix[i][j]);
            rowsum+=matrix[i][j];
        }
    }
    for(int k=1;k<=9;k++)
    {
      for(int i=1,j=k;i<=9;i++)
       {
        colsum+=matrix[i][j];
       }
    }
    int i1=1,i2=1,j1=3,j2=3;
    for(int i=1;i<=9;i++)
    {
        sub(i1,i2,j1,j2);
        if(i2==7 && j2==9)
        {
            i1+=3;
            j1+=3;
            j2=1;
            i2=3;
        }
        i2+=3;
        j2+=3;
    }
      printf("%d\n",subsum);
   if( rowsum==405&& colsum==405 && subsum==405)
   {
       printf("\nYes");
   }
   else
    printf("No");

}
