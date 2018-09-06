call(unsigned long long int a,unsigned long long int b)
 {
    /* if(a!=0)
    call(b%a,a);
    else{
    return b;
    }or*/
    return a==0?b:call(b%a,a);
 }
main()
{
    unsigned long long int a,b;
   int n,pro;
    scanf("%d",&n);
    scanf("%llu%llu",&a,&b);
 //   int pro=call(a,b);
    for(int i=2;i<n;i++)
    {
    scanf("%llu",&b);
     pro=call(a,b);
     a=(a*b)/pro;
    }
    printf("%d",a);
}
