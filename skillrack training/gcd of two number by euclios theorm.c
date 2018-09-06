/* unsigned long long a,b;
 call(int a1,int b1)
 {
      b=a;
     a=b1%a1;
 }
main()
{

    scanf("%llu %llu",&a,&b);
    while(a!=0)
    {
        call(a,b);
    }
    printf("%llu",b);
}*/
//in recursive for array of numbers

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
   int n;
    scanf("%d",&n);
    scanf("%llu",&a);
    for(int i=1;i<n;i++)
    {
    scanf("%llu",&b);
     a=call(a,b);
    }
  printf("%llu",a);
}
