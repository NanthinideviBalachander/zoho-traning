main()
{
    char str[50];
    int n;
    scanf("%s",str);
    scanf("%d",&n);
    char str1[10][50]={0};
    int len=strlen(str),i=0;
    //printf("%s",str);
    //printf("%d%d",len,i);
    while(i<len)
    {
        for(int j=0;j<n;j++)
        {
            str1[j][i]=str[i];
            printf("%c\n",str1[j][i]);
            i++;
        }
        for(int j=n-2;j>0;j--)
        {
            str1[j][i]=str[i];
                    printf("---%c\n",str1[j][i]);
            i++;
        }
    }
   for(int j=0;j<n;j++)
   {
       for(int k=0;k<len;k++)
       {
           if(isalpha(str1[j][k]))
           printf("%c",str1[j][k]);
       }
   }
}
