#include<stdio.h>
#include <stdlib.h>

int main()
{
   char str[50];
   scanf("%s",str);
   int len=strlen(str),n,start=0,a=97;
   for(int i=0;i<len;i++)
   {
       if(isdigit(str[i]))
       {
           n=(int)str[i];
           n-=48;
           //n=str[i]-'0';
          // printf("%d\n",i);
          for(int k=start;k<i;k++)
          {
           for(int j=1;j<=n;j++)
           {
              //printf("%d-%d\n",k,start);
               printf("%c",str[k]);
           }
          // printf("%c",str[k]);
          }
           start=i+1;
       }

   }
   printf("%c",a);
   a++;
   printf("%c",a);

}
//skill rack sum
#include<stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   scanf("%s",str);
   int len=strlen(str);
   int num=str[0]-'0';
   for(int i=1;i<=len;i++)
   {
       if(isdigit(str[i]))
       {
          num=num*10+str[i]-'0';
       }
       if(isalpha(str[i]))
       {
          // printf("%d",num);
           for(int j=1;j<=num;j++)
           {
               printf("%c",str[i]);
           }
           num=0;
       }
   }

}
