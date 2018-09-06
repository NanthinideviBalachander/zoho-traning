#include<stdio.h>
#include <stdlib.h>

int main()
{
  int arr[40][40],n,m,x,a[40],sum[40]={0};
  scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  scanf("%d",&x);
  for(int i=1;i<=m;i++)
  {
      a[i]=i;
      for(int j=1;j<=n;j++)
      {
          sum[i]+=arr[j][i];
      }

  }
for(int i=1;i<=m;i++)
{
    for(int j=i+1;j<=m;j++){
    if(sum[i]>sum[j])
    {
        int t=sum[i];
        sum[i]=sum[j];
        sum[j]=t;

        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    }
}
int z=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        if(a[i]!=j)
        printf("%d",arr[i][j]);
    }
}
}
