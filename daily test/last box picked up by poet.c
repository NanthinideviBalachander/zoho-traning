#include<stdio.h>
#include <stdlib.h>
/*
5
12 30 11 40 12
op:
30
*/
int main()
{
   int arr[40],n,pos;
   scanf("%d ",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d ",&arr[i]);
   }
   for(int i=n;i>=1;)
   {
       if(arr[i]%10==0){
       printf("%d",arr[i]);
       return 0;
       }
       else
       {
           if(!(i-arr[i]%10)<1){
           i-=arr[i]%10;
           pos=arr[i];
           }
           else  if(i-arr[i]%10<1)
           {
               printf("%d",pos);
               return;
           }
           //if(i)
           //printf("%d ",arr[i]);
       }
   }
   printf("%d",pos);

}
