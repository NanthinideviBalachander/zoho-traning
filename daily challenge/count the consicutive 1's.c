#include<stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100][100],n,m,count=0,flag=0;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           scanf("%d ",&arr[i][j]);
       }
   }
   for(int i=1;i<=m;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(arr[j][i]==1 && arr[j+1][i]==1)
           {
                flag=1;
           }
           else if(flag==1)
           {
               count++;
               flag=0;
           }
       }
   }
   printf("%d",count);

}
