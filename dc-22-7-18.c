#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[10000];
   int n,len,index=0,i=0;
   scanf("%d\n",&n);
   scanf("%[^\n]%n",arr,&len);
   for( index=0;i<len;index++)
   {
       for(int j=0;j<=index;j++)
       {
       if(i<len)
       {
           while(arr[i]!=' ' && i<len)
           {
               i++;
           }
           arr[i]='\0';
           printf("%s",&arr[i-n]);
           i++;
           while(arr[i]==' ')
            i++;
       }
       else{
       for(int k=1;k<=n;k++)
         printf("*");
         //exit(0);
       }
       printf(" ");
       }
       printf("\n");
   }

}
