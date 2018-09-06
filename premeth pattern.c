#include<stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   int count[26]={0};
   scanf("%[^\n]",str);
   int len=strlen(str);
 // printf("%s",str);
   //str=tolower(str);
  // strcpy(str,tolower(str));
   printf("%s",str);
   if(len<26)
   {
       printf("no");
       exit(0);
   }
   for(int i=0;i<len;i++)
   {
       if(str[i]==' ')
       continue;
       count[str[i]-97]++;
   }
   for(int i=0;i<26;i++)
   {
      if(count[i]==0)
      {
          printf("%d-%c",count[i],count[i]);
          printf("no");
          exit(0);
      }
   }
   printf("yes");

}
