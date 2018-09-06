int arr[40],flag=0,j=0,n;
static int tot=0;
int call(int i,int total)
{
    if(i==n)
    {
        total+=arr[i];
        return i+2;
    }
    printf("%d-%d ",i,total);
    int sum=0,sum1=0,sum2=0;
    sum=total+(arr[i+1]);
    j=i+1;
    printf("%d-%d\n",sum,j);
    if((sum1=total+(arr[i+2]*2))>sum)
       {
               sum=sum1;
               j=i+2;
            printf("%d-%d\n",sum,j);
       }

    if(flag==0 && i+3<n)
    {
        if((sum2=total+(arr[i+3]*3))>sum)
        {
            sum=sum2;
            flag=1;
           j=i+3;
        }
      printf("%d-%d\n",sum,j);

    }
    tot=sum;
    printf("%d-%d\n",tot,j);
    return j;
}
main()
{
    int i;
    scanf("%d,",&n);
    for(int i=1;i<=n;i++)
    {
     scanf("%d,",&arr[i]);
    // printf("%d-",arr[i]);
    }
    tot=arr[1];
    for( i=1;i<=n;)
    {
        i=call(i,tot);
    }
    printf("%d",tot);
}
