main()
{

    int arr[40],n,a=-1,b=1,c=0,count=0,even=0;
    scanf("%d",&n);
    if(n%2==0)
    {

        for(int i=2;;i++)
        {
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    count++;
                }

            }
            if(count==0)
            {
                even++;
            }
            count=0;
            if(even==n/2)
            {
                printf("%d",i);
                exit(0);
            }
        }
    }
    else{
        for(int i=0;i<=n/2+1;i++)
        {

            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
}
