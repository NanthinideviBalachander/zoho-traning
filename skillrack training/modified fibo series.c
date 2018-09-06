
#include<stdio.h>
#include <stdlib.h>
/*
22
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946

13
0 1 1 2 4 7 13 24 44 81 149 274 504*/
int main()
{
  int arr,a=0,b=1,c=1,d,a1=-1,b1=1,c1=0;
  scanf("%d",&arr);
  int num=arr/10;
  if((num%10)%2==0) // if(num%2==0)
  {
      for(int i=1;i<=arr;i++)
      {
          c1=a1+b1;
          printf("%d ",c1);
          a1=b1;
          b1=c1;
      }
  }
  else
  {
      printf("%d %d %d ",a,b,c);
      for(int i=1;i<=arr-3;i++)
      {
          d=a+b+c;
          printf("%d ",d);
          a=b;
          b=c;
          c=d;
      }
  }

}
