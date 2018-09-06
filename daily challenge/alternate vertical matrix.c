#include<stdio.h>
#include <stdlib.h>
/*
4
1 8 9 16
2 7 10 15
3 6 11 14
4 5 12 13
Yes
*/
int main()
{
  int arr[40][40],n,count=1;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  for(int i=1;i<=n;i++)
  {
      if(i%2!=0){
      for(int j=1;j<=n;j++)
      {
          if(arr[j][i]==count++)
          continue;
          else
          {
              printf("No");
              exit(0);
          }
      }
      }
      else
      {
          for(int j=n;j>=1;j--)
          {
              if(arr[j][i]==count++)
              continue;
              else
              {
                  printf("No");
                  exit(0);
              }
          }
      }
  }
  printf("Yes");

}
