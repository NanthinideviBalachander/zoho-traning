int a=-1,b=1,c=0,n;
fibo(int a,int b)
{
    c=a+b;
    if(c<n)
    printf("%d ",c);
    if(c<n)
        fibo(b,c);
    else
        return 0;
}
main()
{
    scanf("%d",&n);
    fibo(a,b);
}
