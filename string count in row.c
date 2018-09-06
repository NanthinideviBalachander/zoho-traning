#include<stdio.h>
#include <stdlib.h>
 char arr[40],mat[40][40];
 int n,m;
check(int index,int start)
{
    int count=0,j=1;
   for(int i=start ;i<=m;i++)
   {
       if(mat[index][i]==arr[j++])
       {
           count++;
       }
       else
        return 0;
   }
   return 1;
}
int main()
{

   int count=0;
   scanf("%s\n",arr);
   scanf("%d %d\n",&n,&m);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           scanf("%c",&mat[i][j]);
       }
       scanf("\n");
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(mat[i][j]==arr[0])
           {
              count+=check(i,j);
           }
       }
   }
printf("%d",count);
}
