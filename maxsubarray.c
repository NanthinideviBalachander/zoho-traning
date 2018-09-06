int n,arr[50];
sub(int start,int end)
{
    int sum=0;
    if(arr[start]==arr[end])
    {
       // printf("\n%d-%d\n",start,end);
        for(int i=start+1;i<end;i++)
        {
            sum+=arr[i];
           // printf("*%d\n",sum);
        }
            return sum;

    }
    else
    {
      return 0;
    }
}
main()
{
    int sum=0,max=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(int i=1;i<=n;i++)
  {
      for(int j=n;j>=1;j--)
      {
         // printf("\n%d-%d\n",i,j);
          sum=sub(i,j);
          if(sum>max)
          {
              max=sum;
             // printf("%d\n",max);
          }
      }
  }
  printf("%d",max);
}
