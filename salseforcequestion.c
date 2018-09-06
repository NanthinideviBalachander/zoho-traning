#include<stdio.h>
int arr1[50],arr2[50],sum1=0,sum2=0,max=0,n1,n2,start1=1,start2=1;
call(int first,int second)
{
    for(int i=start1;i<=first;i++)
    {
        sum1+=arr1[i];
        printf("sum1  %d",sum1);
    }
    for(int j=start2;j<=second;j++)
    {
        sum2+=arr2[j];
       printf("sum2  %d",sum2);
    }
    if(sum1>=sum2)
    {
        max+=sum1;

    }
    else
    {
       max+=sum2;

    }
    printf("max-%d\n",max);
    sum1=0;
    sum2=0;
    start1=first+1;
    start2=second+1;
}
main()
{
    scanf("%d %d",&n1,&n2);
    //printf("%d  %d",n1,n2);
    for(int i=1;i<=n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=1;i<=n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++)
        {

            if(arr1[i]==arr2[j] || (arr1[i+1]==NULL&& arr2[j+1]==NULL))
            {
                printf("%d-%d\n",i,j);
                call(i,j);

            }
        }
    }
    printf("%d",max);
}
