#include<stdio.h>
#include <stdlib.h>
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
1
4 1 2 3
6 7 8 5
12 9 10 11
14 15 16 13
*/
int main()
{
   int arr[40][40],n,m;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   scanf("%d",&m);
   m=m%n;
   int start;
   for(int i=1;i<=n;i++)
   {

           if(i%2!=0)
           {
               start=n+1-m;
             /* for(int k=n-m+1;k<=n;k++)
              {
                  printf("%d ",arr[i][k%n]);
                  arr[i][k]='*';
              }
             /* for(int k=1;k<=n;k++)
              {
                  if(arr[i][k]!='*')
                  printf("%d ",arr[i][k]);
              }*/

           }
           else
           {
               start=m+1;
              /* for(int k=1+m;k<=n;k++)
               {
                   printf("%d ",arr[i][k%n]);
               }
               /*for(int k=1;k<=m;k++)

                   printf("%d ",arr[i][k]);
               }*/
           }
            for(int k=start;k<start+n+1;k++)
               {
                   printf("%d ",arr[i][k%(n+1)]);
               }
       printf("\n");
   }

}

/*6350532 22 17 34 6350532
22 45 6350972 4
22 17 34 12
19 22 45 10
56 23 29 67
13 14 16 23
119 22
0 56 23 29 0
14 16 9830400 13 14
/*
#include<stdio.h>
#include <stdlib.h>
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
1
4 1 2 3
6 7 8 5
12 9 10 11
14 15 16 13
*//*
int main()
{
   int arr[40][40],n,m;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   scanf("%d",&m);
   m=m%n;
   for(int i=1;i<=n;i++)
   {

           if(i%2!=0)
           {
              for(int k=n-m+1;k<=n;k++)
              {
                  printf("%d ",arr[i][k%n]);
                  arr[i][k]='*';
              }
             /* for(int k=1;k<=n;k++)
              {
                  if(arr[i][k]!='*')
                  printf("%d ",arr[i][k]);
              }*/

          /* }
           else
           {
               for(int k=1+m;k<=n;k++)
               {
                   printf("%d ",arr[i][k%n]);
               }
               /*for(int k=1;k<=m;k++)
               {
                   printf("%d ",arr[i][k]);
               }*/
         /*  }
       printf("\n");
   }

}
*/
