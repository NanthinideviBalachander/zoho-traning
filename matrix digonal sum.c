/*#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,matrix[40][40],sum=0,count;
  scanf("%d",&n);
  count=n;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n;j++)
      {
          scanf("%d",&matrix[i][j]);
          if(i==j)
          {
              sum+=matrix[i][j];
            //  printf("%d-%d ",sum,matrix[i][j]);
          }
          if( j==count && i!=j)
             {
                 sum+=matrix[i][j];
                 //printf("%d-%d ",sum,matrix[i][j]);
             }
      }
      count--;
  }
  printf("%d",sum);

}*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
   int matrix[40][40],n,sum=0,sum1=0,count;
   scanf("%d",&n);
   count=n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           scanf("%d",&matrix[i][j]);
           if(i==j)
             sum+=matrix[i][j];
           if(j==count)
             sum1+=matrix[i][j];
       }
       count--;
   }
   printf("%d-%d-%d",sum,sum1,sum-sum1);

}
