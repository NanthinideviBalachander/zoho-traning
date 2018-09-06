#include<stdio.h>
#include <stdlib.h>
//clockwise
int main()
{
    int arr[40][40],n,m;
    scanf("%d\n%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=1;j--)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

}

//anti clockwise
#include<stdio.h>
#include <stdlib.h>

int main()
{
   int arr[40][40],n,m;
   scanf("%d\n%d",&n,&m);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(int i=m;i>=1;i--)
   {
       for(int j=1;j<=n;j++)
       {
           printf("%d ",arr[j][i]);
       }
       printf("\n");
   }

}
