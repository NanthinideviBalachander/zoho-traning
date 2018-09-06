#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[40];
   int n,m,len;
   scanf("%[^\n]%n",arr,&len);
   scanf("%d\n%d",&n,&m);
  // printf("%d",m);
   for(int i=0;i<len;i++)
   {
       if(arr[i]==' ')
       printf(" ");
       else if(isalpha(arr[i]))
       {
           if(arr[i]>=122)
           {
           printf("%c",n+96);
           }
           else
              printf("%c",arr[i]+n);
       }
       else if(isdigit(arr[i]))
       printf("%d",arr[i]-'0'+m);
   }

}
