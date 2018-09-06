#include<stdio.h>
#include <stdlib.h>
/*
8
0 1 1 2 3 5 8

99
1 19 37 55 73 91
*/
int main()
{
   int arr,osum=0,even=0,odd=0,a=-1,c=0,b=1;
   scanf("%d",&arr);
   int n=arr;
   while(arr)
   {
       if((arr%10)%2==0)
        even++;
        else{
        odd++;
        osum+=arr%10;
        }
        arr/=10;
   }
   if(even>=odd)
   {
       for(int i=1;i<n;i++)
       {
           c=a+b;
           printf("%d ",c);
           a=b;
           b=c;
       }
   }
   else
   {
       for(int i=1;i<=n;i+=osum)
       {
           printf("%d ",i);
       }
   }

}
