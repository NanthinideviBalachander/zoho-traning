#include<stdio.h>
#include <stdlib.h>

int main()
{
   long int num;
   int count=0;
   scanf("%ld",&num);
   int arr[50],n,i=1;
   n=num;
  while(num)
   {
       arr[i]=num%10;
       num=num/10;
      // printf("%d\n",arr[i]);
       if(arr[i]>0 && n%arr[i]==0)
       {
           count++;
          // printf("%d-%d\n",arr[i],n);
       }
       i++;
   }
  printf("%d",count);
}
