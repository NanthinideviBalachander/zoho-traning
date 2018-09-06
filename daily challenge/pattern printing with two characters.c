#include<stdio.h>
#include <stdlib.h>
/*

5 &*
&
*&*
&*&*&
*&*&*&*
&*&*&*&*&

*/
int main()
{
   char n,m,ch,arr[3];
   int x,count=1;
   scanf("%d %s",&x,arr);
   n=arr[0];
   m=arr[1];
  // printf("%d %c %c",x,n,m);
   ch=n;
   for(int i=1;i<=x;i++)
   {
       for(int j=1;j<=count;j++)
       {
           printf("%c",ch);
           ch=ch==n?m:n;
          /* if(ch==n)
             ch=m;
            else
              ch=n;*/
       }
       printf("\n");
       count+=2;
   }

}
