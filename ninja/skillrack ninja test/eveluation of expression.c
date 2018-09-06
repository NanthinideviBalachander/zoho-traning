#include<stdio.h>
#include <stdlib.h>
#define opt1 char
main()
{
    typedef char opt2;
    opt1 x;
    x=255;
    printf("%d",x);
}
/*int main()
{
   char arr[40],sy;
   int n,m,sum;
   scanf("%d",&n);
   while(scanf("%c%d",&sy,&m)>0)
   {
       switch (sy)
       {
           case '+':sum=n+m;break;
           case '-':sum=n-m;break;
           case '*':sum=n*m;break;
           case '/':sum=n/m;break;
           case '^':sum=pow(n,m);
       }
       printf("%d %d %d ",sum,n,m);
       n=sum;
   }
 printf("%d",sum);
}*/
