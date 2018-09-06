/*
4
2 4 6 10
8
*/
/*main()
{
    int arr[40],min,dif,n;
    scanf("%d\n%d %d",&n,&arr[1],&arr[2]);
    dif=arr[2]-arr[1];
    for(int i=3;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        min=arr[i]-arr[i-1];
        if(min<dif)
            dif=min;
    }
    for(int i=2;i<=n;i++)
    {
        if(!(arr[i]-arr[i-1]==dif))
            printf("%d",arr[i-1]+dif);
    }
}*/

//or
main()
{
    int arr[40],min,dif,n;
    scanf("%d\n%d",&n,&arr[1]);
    //dif=arr[2]-arr[1];
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]!=arr[1]*i)
            printf("%d",arr[1]*i);

    }

}
