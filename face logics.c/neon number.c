main()
{

    int n,sum=0,m;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {

        sum+=n%10;
        n/=10;
    }
    if(m==sum)
        printf("yes");
    else
        printf("no");
}
