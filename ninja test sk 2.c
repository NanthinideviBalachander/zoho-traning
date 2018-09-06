#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[100000];
   int len;
   scanf("%[^\n]%n",arr,&len);
   for(int i=0;i<len;i++)
   {
       if(arr[i]!='*'){
       for(int j=i+1;j<len;j++)
       {
           if(arr[i]==' ')
            break;
           if(arr[i]==arr[j] )
              arr[j]='*';
       }
       printf("%c",arr[i]);
       }
      /* if(arr[i]==' ')
        printf(" ");*/
   }

}
