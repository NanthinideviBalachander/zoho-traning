#include<stdio.h>
#include <stdlib.h>
unsigned long long int call(unsigned long long int a,unsigned long long int b)
{
    if(a!=0)
    call(b%a,a);
    else
    return b;
}
int main()
{
  unsigned long long int n,arr[100001],i,lcm,gcd,max=-1;
  scanf("%llu\n%llu",&n,&arr[1]);
  for( i=2;i<=n;i++)
  {
      scanf("%llu",&arr[i]);
      gcd=call(arr[i-1],arr[i]);
      lcm=(arr[i-1]*arr[i]/gcd);
     // printf("\n%d",lcm);
      if(lcm>max)
       max=lcm;
  }
  printf("%llu",max);

}
