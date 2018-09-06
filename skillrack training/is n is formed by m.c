#include<stdio.h>
#include <stdlib.h>
/*
op:
5555
65
No

12345
345
Yes
*/
int main()
{
   char arr[40],arr1[40];
   int len1,len2,count=0;
   scanf("%s%n%s",arr,&len1,arr1);
   len2=strlen(arr1);
   for(int i=0;i<len1;i++)
   {
       for(int j=0;j<len2;j++)
       {
           if(arr[i]==arr1[j] && arr1[j]!='*')
           {
               count++;
               arr1[j]='*';
           }
       }
   }
 if(count==len2)
 printf("Yes");
 else
 printf("No");
}
