#include <stdio.h>
#include <stdlib.h>

int main(int count, char *arr[])
{
   int n,len,array[40],n1=1,result;
   char *str=(char *)malloc(100*sizeof(char)),ch;
   str=arr[1];
   sscanf(str,"%d%n",&result,&n1);
   str+=n1;
   while(sscanf(str,"%c%d%n",&ch,&n,&len)>0)
   {
       printf("%d %c ",n,ch);
       switch(ch)
       {
           case '+':result+=n;break;
           case '-':result-=n;break;
           case '/':result/=n;break;
           case '*':result*=n;break;
       }
       /*if(n1==1)
        {
       str+=len+n1;
       n1=0;
         }*/
        //else
      str+=len;
   }
   printf("%d",result);
    return 0;
}
