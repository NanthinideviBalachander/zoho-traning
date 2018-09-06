#include<stdio.h>
#include <stdlib.h>

int main()
{
  int num,i=1,arr[10001],arr2[1001];
  scanf("%d",&num);
  while(num)
  {
      arr[i]=num%2;
      num=num/2;
      printf("%d ",arr[i]);
      i++;
  }
  printf("\n%d\n",i);
  i--;
  int sum=0,j=0,g=i;
  /*for(int k=1;k<=i;k++)
  {
      arr2[k]=arr[g];
      if(k%2==0)
      {
          arr2[k]=1;
      }
      sum=sum+(arr2[k]*(2^j));
      printf("%d ",arr2[k]);
      g--;
      j++;
  }*/
  printf("\n");
  for(int k=1;k<=i;k++)
  {
      if(k%2==0 && arr[k]==0)
      {
          arr[k]=1;
      }
      printf("%d ",arr[k]);
      sum=sum+(arr[k]*pow(2,j));
      j++;
  }
printf("\n%d",sum);
}
