#include<stdio.h>
#include <stdlib.h>
// smallest possible odd number

int main()
{
     int arr,arr1,i=0,j=1,num[40],num1[40];
     scanf("%d %d",&arr,&arr1);
     while(arr)
     {
         num[++i]=arr%10;
         arr/=10;
     }
     while(arr1)
     {
         num[++i]=arr1%10;
         arr1/=10;
     }
     int pos=0,min=999,flag=0;
     for(j=1;j<=i;j++)
     {
         for(int k=j+1;k<=i;k++)
         {
             if(num[j]>num[k]){
             int t=num[j];
             num[j]=num[k];
             num[k]=t;
             }
         }
         if(num[j]%2!=0 && num[j]<min){
         min=num[j];
         pos=j;
         flag=1;
         }
     }
     if(flag==0)
     {
         printf("-1");
         exit(0);
     }
    // printf("%d ",num[1]);
     if(num[1]==0)
     {
         for(j=1;j<=i;j++)
         {
             if(num[j]==0)
            {

            }
            else
            {
                int t=num[j];
                num[j]=num[1];
                num[1]=t;
              //  printf("%d\n",num[j]);
            }
         }
     }
     for(j=1;j<=i;j++)
     {
         if(j==pos)
         continue;
         else
         printf("%d",num[j]);
     }
     printf("%d",num[pos]);

}
