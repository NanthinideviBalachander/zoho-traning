main()
{
    int n;
    scanf("%d",&n);
   /* int rem=n/2;
    if(rem*2==n)
     printf("even");
     else
    printf("odd");*/
    if(n&1)
     printf("odd");
    else
    printf("even");
    printf("%d",n&1);
   //printf("%x",n);//to print the element in hexadecimal

}
