#include<stdio.h>
#include <stdlib.h>
/*
  char repeating atleast n times consecutively
 ip: aabccbhhhnn
   2
op:achn
  */
int main()
{
  char arr[200];
  int acount=1,n,len;
  scanf("%s%n\n",arr,&len);
  scanf("%d",&n);
  for(int i=0;i<len;i++)
  {
      if(arr[i]==arr[i+1])
      {
          acount++;
      }
      else
      {
          if(acount>=n)
          {
              printf("%c",arr[i]);
          }
          acount=1;
      }
  }
 /* for(int i=0;i<=25;i++)
  {
      if(count[i]>=n)
       printf("%c",i+97);
  }*/

}
