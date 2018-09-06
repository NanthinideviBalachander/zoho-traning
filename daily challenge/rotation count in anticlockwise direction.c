#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,arr[40],count=0,pos,max=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&arr[i]);
       if(arr[i]>max)
       {
           pos=i;
           max=arr[i];
       }
   }
   if(pos==n)
   printf("0");
   else
  printf("%d",pos);
}










