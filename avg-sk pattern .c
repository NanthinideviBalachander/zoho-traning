#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,k,count;
    scanf("%d",&n);
    k=n,count=n;
    for(int i=1;i<=n;i++)
    {
        sum=i;
        count=n;
        for(int j=1;j<=k;j++)
        {
          //  sum+=count;
            printf("%d ",sum);
            sum+=count;
            count--;
        }
        printf("\n");
        k--;
    }

}
}
