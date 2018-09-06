#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[40],arr1[40];
   int len1,len2,flag=0;
   scanf("%s%n %s%n",arr,&len1,arr1,&len2);
   for(int i=0;i<len1;i++)
   {
       if(arr[i]!='*'){
       for(int j=0;j<len2;j++)
       {
           if(arr[i]==arr1[j])
           {
               if(flag==0)
               {
                   printf("%c ",arr[i]);
                   flag=1;
                 //  printf("%c-%d-%d ",arr1[j],j,i);
               }
              // arr[i]='*';
               arr1[j]='\0';
              // flag=1;
           }
       }
       }
       //if(flag==1)
       arr[i]='*';
       flag=0;
   }

}
