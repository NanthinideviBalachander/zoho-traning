main()
{
    int arr[40],count=1;
    for(int i=1;i<=12;i++)
    {
    scanf("%d,",&arr[i]);
    if(i>1)
    {
        if(arr[i]!=1 && arr[i]==arr[i-1])
                    count++;
    }
    }
    if(count==12)
    {
        printf("0");
        exit(0);

    }


}
