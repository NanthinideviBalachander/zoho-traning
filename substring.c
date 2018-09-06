main()
{
    char str1[50],substr[50],count=1;
    scanf("%s %s",str1,substr);
    int len=strlen(str1);
    int len2=strlen(substr);
   // printf("%d",len2);
    for(int i=0;i<len;i++)
    {
        if(str1[i]==substr[0])
        {
            printf("%d%c",i,str1[i]);
            int index=i;
            int k=1;
            for(int j=index+1;j<len;j++)
            {
                if(str1[j]==substr[k])
                {
                    printf("\n %d%c ",j,str1[j]);
                    count++;
                }
                else
                    break;
                k++;
            }
            if(count==len2)
            {
                printf("%d",index);
                break;
            }
            else
                count=1;
        }
    }
    printf("-1");

}
