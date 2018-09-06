#include<stdio.h>
#include <stdlib.h>

int main()
{
  int arr,a=-1,b=1,c=0,count=1;
  scanf("%d",&arr);
  c=a+b;
  while(c<arr)
  {

      for(int i=2;i*i<=c;i++)
      {
          if(c%i==0)
          {
              count++;
              break;
          }

      }
      if(count==0 && c!=1 )
      {
          printf("%d ",c);
      }
      a=b;
      b=c;
      c=a+b;
      count=0;

  }

}
