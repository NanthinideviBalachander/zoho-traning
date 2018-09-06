void main()
{
    char arr[100],flag=0;
    scanf("%s",arr);
    int len=strlen(arr);
     int count=0;
    for(int i=0;i<=len;i++)
    {
        if(isdigit(arr[i+1]) )
        {
          int n=(arr[i+1])-'0';
          int j=i+2;
           while(isdigit(arr[j]))
           {
               n=(n*10)+(arr[j]-'0');
               j++;
               count++;
               flag=1;
           }
            // printf("\n%d\n",count);
            for(int j=1;j<=n;j++)
                printf("%c",arr[i]);
            if(flag==1)
            {
                 i=i+count;
                 flag=0;
                 count=0;
            }

        }
        else if(isalpha(arr[i]))
            printf("%c",arr[i]);
    }
}
