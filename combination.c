fun(int num)
{
    int flag=0;
    int n=num;
    while(num>0)
    {
        if(num%10==3 || num%10==4)
        {
            num=num/10;
            flag=1;
        }

        else
            return ;
    }
    if(flag==1){
         printf("\n%d",n);

    }

}
void main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=1000;i++)
    {
        fun(i);
    }
}
