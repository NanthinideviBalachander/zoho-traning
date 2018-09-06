/*
op:

5
1 2 3 4 5
6 7 8 9 0
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
1 2 3 4 5
6 7 8 9 0
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

13 14 15 4 5
18 19 20 9 0
23 24 25 14 15
16 17 18 19 20
21 22 23 24 25

1 2 3 4 5
6 7 8 9 0
11 12 1 2 3
16 17 6 7 8
21 22 11 12 13

*/
main()
{
    int arr[40][40],arr1[40][40],sub1[40][40],sub2[40][40],quad,n;
    scanf("%d\n",&n);
    if(n%2==0)
        quad=n/2;
    else
        quad=(n+1)/2;
    //printf("%d\n",quad);
    for(int index=1;index<=n;index++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[index][j]);
            if(index<=quad && j<= quad)
            {
                sub1[index][j]=arr[index][j];
               // printf("%d ",sub1[index][j]);
            }
        }
      //  printf("\n");
    }
   for(int index=1;index<=n;index++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr1[index][j]);
            if(index>=quad && j>= quad)
            {
                sub2[index-quad+1][j-quad+1]=arr[index][j];
            }
        }
    }
    printf("\n");
    for(int index=1;index<=n;index++)
    {
        for(int j=1;j<=n;j++)
        {
            if(index<=quad && j<= quad)
            {
                printf("%d ",sub2[index][j]);
            }
            else
                printf("%d ",arr[index][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int index=1;index<=n;index++)
    {
        for(int j=1;j<=n;j++)
        {
            if(index>=quad && j>= quad)
            {
                printf("%d ",sub1[index-quad+1][j-quad+1]);
            }
            else
                printf("%d ",arr1[index][j]);
        }
        printf("\n");
    }
}
