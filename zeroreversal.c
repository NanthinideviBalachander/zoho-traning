#include<stdio.h>
int num[50],start=1,nextpos=1;
fun(int end)
{
    nextpos=end+2;
    while(start<=end)
    {
        int temp=num[start];
        num[start]=num[end];
        num[end]=temp;
        start++;
        end--;
    }
    start=nextpos;
}
main()
{
    int i=1;
    while(scanf("%d",&num[i])>0)
    {
        i++;
    }
    //printf("%d\n",i);
    for(int j=1;j<=i;j++)
    {
        if(num[j]==0 )
        {
            fun(j-1);
        }
        if(num[j]==NULL)
        {
            fun(j-1);
        }

    }
    for(int j=1;j<i;j++)
    {
        printf("%d ",num[j]);
    }
}
