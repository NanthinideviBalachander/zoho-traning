#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,k=1,flag=0,count,g=0;
   scanf("%d",&n);
   int mid=(n/2)+1;
   count=n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(i==mid)
           {
               printf("%d",j);
               flag=1;
               g=1;
           }
          else if(j==k||j==count && flag==0)
           {
               printf("*");
              // count--;
               //k++;
           }
           else if(j==k||j==count && flag==1)
           {
               printf("*");
               //count++;
               //k--;
           }
           else if(j==mid)
           {
              printf("%d",i);
           }
           else
           {
               printf("-");
           }
       }
       printf("\n");
       if(flag==1 && g==1)
       {
           count=mid+1;
           k=mid-1;
           g=23;
       }
       if(flag==0 ){
       count--;
       k++;
       }
       if(flag==1 && g==0)
       {
           count++;
           k--;

       }
       g=0;
   }

}
