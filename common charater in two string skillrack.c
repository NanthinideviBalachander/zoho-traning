#include<stdio.h>
#include <stdlib.h>

int main()
{
   char str[50],str1[50];
   scanf("%s",str);
   scanf("%s",str1);
   int len1=strlen(str);
   int len2=strlen(str1),flag=0,count=0;
   for(int i=0;i<len1;i++)
   {
       if(str[i]!='*'){
           for(int k=i+1;k<len1;k++)
           {
               if(str[i]==str[k])
               str[k]='*';
           }
       for(int j=0;j<len2;j++)
       {
           if(str[i]==str1[j] && flag==0)
           {
               str1[j]='*';
               flag=1;
               count++;
              // printf("%c-%c ",str[i],str1[j]);
           }
       }
       flag=0;
       }
   }
  printf("%d",count);
}
