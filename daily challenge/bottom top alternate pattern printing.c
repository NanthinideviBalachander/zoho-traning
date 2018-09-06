#include<stdio.h>
#include <stdlib.h>

/*int main()
{
  int arr,count=1,n;
  scanf("%d",&arr);
  if(arr%2==0)
    n=arr/2;
  else
    n=arr/2+1;
  for(int i=1;i<=arr;i++)
  {
      for(int j=1;j<=arr;j++)
      {
          printf("%d",count++);
          if(j!=arr)
          printf("*");
      }
      if(i<n){
      count+=arr;
      }
      else{
        count-=2*arr;
      }
      printf("\n");
  }

}*/
/* solved
op:
7
1 2 3 4 5 6 7
15 16 17 18 19 20 21
29 30 31 32 33 34 35
43 44 45 46 47 48 49
36 37 38 39 40 41 42
22 23 24 25 26 27 28
8 9 10 11 12 13 14
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
   int arr[40][40],n,count=1,erow;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       erow=i%2==0?i/2:(n-i/2-1);
       for(int j=0;j<n;j++)
       {
           arr[erow][j]=count++;
       }
   }
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("%d ",arr[i][j]);
      }
      printf("\n");
  }
}
