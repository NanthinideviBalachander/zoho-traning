main()
{
    int count[127]={0};
    char str[50];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<=len;i++)
    {
        count[str[i]]++;
    }
    for(int i=97;i<=123;i++)
    {
        if(count[i]>0)
        {
            printf("%c%d",i,count[i]);
        }
    }
}
