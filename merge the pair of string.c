#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,j,k;
  char str[50],str1[50],str2[50];
  scanf("%d ",&n);
  for(int i=1;i<=n;i++)
  {
      scanf("%s %s",str,str1);
      int len=strlen(str);
      int len1=strlen(str1);
     // l=len>len1?len:len1;
      for( j=0,k=0;j<len||k<len1;)
      {
          if(j<len)
          {
        printf("%c",str[j]);
        j++;
          }
         if(k<len1)
         {
          printf("%c",str1[k]);
          k++;
         }
      }
      printf("\n");
  }

}
