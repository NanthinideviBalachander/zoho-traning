/*
 8
1 3 2 3 7 100 1 80
112

*/
main()
{
    int arr[40],n,front=1,end,sum,max=0;
    scanf("%d",&n);
    end=n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=arr[i-1])
        {
            sum+=arr[i];
        }
        else
        {
            if(sum>max)
                max=sum;
            sum=arr[i];
        }

    }
    /*while(front<=end)
    {
        if(arr[front]+arr[end]>sum)
            end--;
        else if(arr[front]+arr[end]<sum)
            front++;
        else if(arr[front]+arr[end]==sum){
            printf("%d %d",arr[front],arr[end]);
            return 0;
        }
    }*/
    printf("%d",max);
}
