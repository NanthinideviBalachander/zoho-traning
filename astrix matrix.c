#include<stdio.h>
#include <stdlib.h>
/*
  ip: 5
  op:
   * * * * *
   * 1 2 3 *
   * 4 * 6 *
   * 7 8 9 *
   * * * * *
   */
int main()
{
  int n;
  scanf("%d",&n);
  int mid=n/2+1,count=1;
  if(n==1)
  {
      printf("*");
      exit(0);

  }
  for(int i=1;i<=n;i++)
  {
      printf("* ");
      for(int j=2;j<n;j++)
      {
          if(i==1 || i==n)
          {
              printf("* ");
          }
          else if(i==mid && j==mid)
          {
              printf("* ");
              count++;
          }
          else
          {
              printf("%d ",count);
              count++;
          }
      }
      printf("*\n");
  }

}
