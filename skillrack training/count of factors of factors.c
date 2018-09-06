#include<stdio.h>
#include <stdlib.h>
int k=1,arr[40];
fact(int num)
{
    int count=0,i;
    if(num!=1){
    for( i=1;i*i<num;i++)
    {
        if(num%i==0)
        count+=2;
    }
    }
    if(i*i==num)
    arr[k++]=1+count;
     else if(num!=1)
    arr[k++]=count;
    else
    arr[k++]=1;

}
int main()
{
  int num,fcount=0;
  scanf("%d",&num);
  for(int i=1;i*i<=num;i++)
  {
      if(num%i==0)
      {
          printf("%d ",i);
          fact(i);
          fcount++;
      }
  }
  printf("%d",num);
  fact(num);
  printf("\n");
  for(int i=1;i<=fcount+1;i++)
  {
      printf("%d ",arr[i]);
  }

}
