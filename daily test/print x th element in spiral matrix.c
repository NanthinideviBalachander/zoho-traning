#include<stdio.h>
#include <stdlib.h>

int main()
{
    int arr[40][40],n,m,x=0,num[40];
    scanf("%d %d",&n,&m);
    int from=1,to=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1;i<=r-1;i++)
    {
        for(int j=from;j<=to;j++)
        {
        num[++x]=arr[from][j];
        if(x==m)
        {
            printf("%d+",num[x]);
            exit(0);
        }
        }
        for(int j=from-1;j<=to;j++)
        {
            num[++x]=arr[j][to];
            if(x==m){
            printf("%d",num[x]);
            exit(0);
            }
        }
        for(int j=to-1;j>=from;j--)
        {
            num[++x]=arr[to][j];
            if(x==m)
            {
                printf("%d",num[x]);
                exit(0);
            }
        }
        for(int j=to-1;j>=from+1;j--)
        {
            num[++x]=arr[j][from];
            if(x==m)
            {
                printf("%d",num[x]);
                exit(0);
            }
        }
    }

}
