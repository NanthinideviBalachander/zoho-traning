tolow(char name[])
{
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
        if(i%2!=0)
        {
            printf("%c",toupper(name[i]));
        }
        else
        {
            printf("%c",tolower(name[i]));
        }
    }
    printf("\n");
}
toup(char name[])
{
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            printf("%c",toupper(name[i]));
        }
        else
        {
            printf("%c",tolower(name[i]));
        }
    }
    printf("\n");
}
main()
{
    int n;
    scanf("%d",&n);
    char name[n][50];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",name[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            tolow(name[i]);
        }
        else
        {
            toup(name[i]);
        }
    }
    for(int i=n;i>=1;i--)
    {
         if(i%2!=0)
        {
            tolow(name[i]);
        }
        else
        {
            toup(name[i]);
        }
    }
}
