#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,count[50]={0},num[50];
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&num[i]);
       if(num[i]%2==0)
       {
           count[i]+=3;
       }
       if(num[i]%6==0 && num[i]%4==0)
       {
           count[i]+=4;
       }
       for(int j=1;j<=num[i]/2;j++)
       {
           if(j*j==num[i])
           {
               count[i]+=5;
           }
       }
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=i+1;j<=n;j++)
       {
           if(count[i]<count[j])
           {
               int temp=count[i];
               count[i]=count[j];
               count[j]=temp;

               temp=num[i];
               num[i]=num[j];
               num[j]=temp;
           }
           else if(count[i]==count[j])
           {
               if(num[i]<num[j])
               {
                   int temp=num[i];
                   num[i]=num[j];
                   num[j]=temp;
               }
           }
       }
   }
   for(int i=1;i<=n;i++)
   {
       printf("%d\n",num[i]);
   }

}
