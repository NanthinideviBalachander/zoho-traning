#include<stdio.h>
#include <stdlib.h>

int main()
{
  int arr[40],n,max=1,j=1,count=0,num=0;
  scanf("%d",&n);
  for(int i=2;i*i<=n;i++)
  {
    count=0;
      //if(n%i==0)

          while(n%i==0)
          {
              count++;
              n/=i;
          }
          if(count>=max)
          {
              max=count;
              num=i;
          }

  }
  if(max==1)
    printf("%d",n);
  else
 printf("%d-%d",num,count);

}
