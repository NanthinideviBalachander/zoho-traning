main()
{
    int n,arr[40],max1=0,max2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max2 && arr[i]<=max1)
            max2=arr[i];
        if(arr[i]>max1)
            max1=arr[i];
            printf("%d%d\n",max1,max2);
    }
    printf("%d",max2);

}
