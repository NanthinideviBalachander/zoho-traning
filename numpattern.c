/*
ip:6
op:
1 7 12 16 19 21
2 8 13 17 20
3 9 14 18
4 10 15
5 11
6
*/
main()
{
    int n,k,count=0,sum=1;
    scanf("%d",&n);
    k=n;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=i;
        count=n;
        for(int j=1;j<k;j++)
        {
            sum=sum+count;
            printf("%d ",sum);
            count--;
        }
        k--;

        printf("\n");
    }
}
