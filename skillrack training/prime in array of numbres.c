//sevi of erothanoius method
int main(int argc , char *arr[])
{
    int n;
    //scanf("%d",&n);
    n=atoi(arr[1]);
    int *arr=(int *)calloc(n+1,sizeof(int));
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int index=i*2;index<=n;index+=i)
            {
                arr[index]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
            printf("%d ",i);
    }
    return 0;
}
