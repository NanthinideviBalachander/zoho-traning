#include<stdio.h>
#include <stdlib.h>
/*4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
int main()
{
  int n,matrix[40][40];
  scanf("%d",&n);
  int len=n*2-1,len2=n*2-1,y=n;
  int m=1,x=1,i,j;
  for(int k=1;k<=y;k++)
  {
  for( i=x;i<=len;i++)
  {
      for( j=m;j<=len;j++)
      {
          matrix[i][j]=n;
         // printf("%d ",n);
      }
     // printf("\n");
  }
  x++;
  m++;
  len--;
  n--;
  }
for(int i=1;i<=len2;i++)
{
    for(int j=1;j<=len2;j++)
    {
     printf("%d",matrix[i][j]);
    }
printf("\n");
}
}
