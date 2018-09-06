#include<stdio.h>
#include <stdlib.h>

int main()
{
  char str[50],str1[50];
  scanf("%s\n%s",str,str1);
  int len=strlen(str),flag=1,j=0;
  for(int i=0;i<len;i++)
  {
      if(str[i]==str1[j])
      j++;
  }
  str1[j]=NULL;
  printf("%s",str1);

}
