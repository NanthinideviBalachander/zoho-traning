/*
   5 5
1 2 3 4 5
1 4

*/
main()
{
    int arr[40],n,front=1,end,sum;
    scanf("%d %d",&n,&sum);
    end=n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        //if(arr[i]<arr[i-1])

    }
    while(front<=end)
    {
        if(arr[front]+arr[end]>sum)
            end--;
        else if(arr[front]+arr[end]<sum)
            front++;
        else if(arr[front]+arr[end]==sum){
            printf("%d %d",arr[front],arr[end]);
            return 0;
        }
    }
}
