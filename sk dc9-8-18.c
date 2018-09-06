#include<stdio.h>
#include <stdlib.h>
//max 2*2 sub array which equals to the sum
int arr[40][40];
fun(int i,int i1,int j,int j1)
{
   int  sum=arr[i][j]+arr[i][j1]+arr[i1][j]+arr[i1][j1];
    return sum;
}
int main()
{
   int r,c,sum,result=0;
   scanf("%d %d",&r,&c);
   for(int i=1;i<=r;i++)
   {
       for(int j=1;j<=c;j++)
        scanf("%d",&arr[i][j]);
   }
   scanf("%d",&sum);
   for(int i=1;i<=r;i++)
   {
       for(int j=1;j<=c;j++)
       {
           result=fun(i,i+1,j,j+1);
           if(result==sum)
           {

               printf("%d %d\n",arr[i][j],arr[i][j+1]);
               printf("%d %d",arr[i+1][j],arr[i+1][j+1]);
               exit(0);
           }
       }
   }

}
