#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,sum=0;
   char arr[50];
   scanf("%s",arr);
   int len=strlen(arr);
   for(int i=0;i<len;i++)
   {
       if(isdigit(arr[i]))
       {
           sum+=arr[i]-'0';
       }
       else
       {
           arr[i]=tolower(arr[i]);
       }
   }
   for(int i=0;i<len;i++)
   {
       if(isalpha(arr[i]))
       {
           if(arr[i]+sum<123)
           {
               printf("%c",arr[i]+sum);
           }
           else
           {
               printf("%c",(arr[i]+sum)-26);
           }
       }
   }

}
