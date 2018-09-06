#include<stdio.h>
#include <stdlib.h>

int main()
{
   int num[50],i=1,count[10]={0};
   long int n;
   scanf("%ld",&n);
   while(n!=0)
   {
       num[i]=n%10;
       n=n/10;
       //count[num[i]]++;
      //printf("%d-%d\n",num[i],count[num[i]]);
       i++;
   }
   i--;
   for(int j=1)
   for(int j=1;j<=9;j++)
   {
       for(int k=j+1;k<=9;k++)
       {
           if(count[j]>count[k])
           {
               int temp=count[j];
               count[j]=count[k];
               count[k]=temp;

               temp=num[j];
               num[j]=num[k];
               num[k]=temp;
           }
           else if(count[j]==count[k])
           {
               if(num[j]>num[k])
               {
                   int temp=count[j];
                   count[j]=count[k];
                   count[k]=temp;

                   temp=num[j];
                   num[j]=num[k];
                   num[k]=temp;
               }
           }
       }
   }
   for(int k=1;k<=9;k++)
   {
       if(count[k]>0)
       {
        for(int j=1;j<=count[k];j++)
       {
       printf("%d",num[k]);
        }
       }
   }
}
