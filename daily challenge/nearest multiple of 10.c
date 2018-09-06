#include<stdio.h>
#include <stdlib.h>

int main()
{
  int arr;
  scanf("%d",&arr);
  int diff=arr%10;
  if(diff<=5)
    arr=arr-diff;
  else
    arr=arr+(10-diff);
  printf("%d",arr);

}
