#include<stdio.h>
#include <stdlib.h>

int main()
{
  char arr[100000];
  int len,count=0;
  scanf("%s%n",arr,&len);
  for(int i=0;i<len;i++)
  {
      if(arr[i]=='a' && !(isdigit(arr[i+1])))
      {
          for(int j=i+2;j<len;j++)
          {
              if(isdigit(arr[j]))
              break;
              else if(arr[j]=='b')
               count++;
          }
      }
  }
  printf("%d",count);

}
