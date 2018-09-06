#include<stdio.h>
#include <stdlib.h>
call(int sum)
{
    int num=0;
    while(sum>0)
    {
        num+=sum%10;
        sum/=10;
    }
    if(num<10)
    printf("%d",num);
    else
      call(num);
}
int main()
{
 int arr[40],n1,i;
  int sum=0,len;
  scanf("%d",&n1);
  for(int i=1;i<=n1;i++)
  {
      scanf("%d",&arr[i]);
  }
  while(n1>=1){
  for( i=1;i<n1;i++)
  {
      arr[i]=arr[i]+arr[i+1];
      printf("%d ",arr[i]);
  }
  printf("\n");
  arr[n1]-'\0';
  n1--;
  }

  if(arr[1]>9)
  {
      call(arr[1]);
  }
  else
 printf("%d",arr[1]);



 /*char arr[40];
 int n1,i;
  int sum=0,len;
  scanf("%d\n",&n1);
  scanf("%s ",arr);
  while(n1>=1){
  for( i=0;i<n1-1;i++)
  {
      arr[i]=arr[i]-'0'+arr[i+1]-'0';
      printf("%d ",arr[i]-'0');
  }
  printf("\n");
  arr[n1]='\0';
  n1--;
  }

  if(arr[0]-'0'>9)
  {
      call(arr[0]-'0');
  }
  else
 printf("%d",arr[0]-'0');*/



  /*int i=1;
  printf("%d %d %d %d %d %d",i++,++i,++i,i++,++i,i++ + ++i + ++i + i++ + ++i);*/
}
