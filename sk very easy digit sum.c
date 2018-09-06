#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[40];
   int len,sum=0;
   scanf("%s%n",arr,&len);
   len--;
   for(int i=0;i<=len;i++)
    {
        if(len==i){
          sum+=arr[i]-'0';
          break;
        }
        else
        {
       sum=sum+((arr[i]-'0')*(arr[len]-'0'));
       len--;
        }

   }
   printf("%d",sum);
}
