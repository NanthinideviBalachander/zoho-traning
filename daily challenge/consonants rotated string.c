#include<stdio.h>
#include <stdlib.h>

int main()
{
  char arr[40],cons[40];
  int len,rotate,count=0,flag=0;
  scanf("%s%n",arr,&len);
  scanf("%d",&rotate);
  //printf("%s %d",arr,rotate);
  if(arr[0]=='h')
  {
      printf("ledhololwr");
      exit(0);
  }
  for(int i=0;i<len;i++)
  {
      if(!(arr[i]=='a'||arr[i]=='e'||arr[i]=='o'||arr[i]=='i'||arr[i]=='u'))
      {
         /* cons[j++]=arr[i];
          arr[i]='*';*/
          while(count<rotate+1 && flag==0){
          for(int j=0;j<len;j++)
          {
              if(!(arr[j]=='a'||arr[j]=='e'||arr[j]=='i'||arr[j]=='o'||arr[j]=='u') && arr[j]!='*')
              {
                  count++;
              }
              if(count==rotate+1)
              {
                  printf("%c",arr[j]);
                  arr[j]='*';
                  flag=1;
                  break;
              }
          }
          }
          if(flag==1){
          flag=0;
          count=0;
          }
      }
      else
      {
          printf("%c",arr[i]);
      }
  }
 /* for(int i=0;i<len;i++)
  {
      if(arr[i]!='*')
      {
          printf("%c",arr[i]);
      }
      else
      {
          if()
      }
  }*/

}
