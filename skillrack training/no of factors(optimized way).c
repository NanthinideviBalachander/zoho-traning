fact(int i,int n)
{
     if(n%i==0)
        return 2;
     else
        return 0;
}
main()
{
    int arr,n,i,count=0;
    scanf("%d",&n);
    for( i=1;i*i<n;i++)
    {
       count+= fact(i,n);
           // if(n%i==0)
            //count+=2;
    }
    if(i*i==n)
        count++;
    printf("%d",count);
}
