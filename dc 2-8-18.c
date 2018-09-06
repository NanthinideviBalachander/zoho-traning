/*#include<stdio.h>
#include <stdlib.h>

int main()
{
  char arr[40];
  int len,rem=0,flag=0;
  scanf("%s%n",arr,&len);
  if(len%2!=0)
  {
    len--;
    flag=1;
  }
  int count=len/2,i=0;
  printf("%d\n",count);
  int cou=count;
  while(cou)
  {
      rem=rem*10+(arr[i]-'0');
      printf("%d",arr[i]-'0');
      if(cou==1 && flag==1)
        printf("%d",arr[i+1]-'0');
      i++;
      cou--;
  }
 /* for(int i=0;i<=count;i++)
    printf("%d",arr[i]-'0');*/
/*  while(rem)
  {
      printf("%d",rem%10);
      rem/=10;
  }
printf("\n%d",*arr+1-'0');
}

*/
//from skill rack
#include<stdio.h>
#include <stdlib.h>

int main()
{
   long int n,i,j,k;
   scanf("%ld",&n);
   i=j=n;
   while(1)
   {
      k=rev(i);
       i--;
       if(k==0)
       break;
       k=rev(j);
       j++;
       if(k==0)
       break;
   }

}
int rev(long int a)
{
    long int rev=0,res,n;
    n=a;
    while(a>0)
    {
        res=a%10;
        rev=rev*10+res;
        a=a/10;
    }
    if(rev==n)
    {
        printf("%ld",rev);
        return 0;
    }
    else
    return 1;
}


