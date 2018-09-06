#include<stdio.h>
#include <stdlib.h>

int main()
{
  int arr[40][40],n;
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
      for(int j=n;j>=1;j--)
      {
          printf("%d ",arr[j][i]);
      }
      printf("\n");
  }

}
