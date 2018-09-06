main()
{
    char arr[50],str[50];
    int count[26]={0},j=1,k=1,i,n;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++)
    {
         scanf("%s ",arr);
    int len=strlen(arr);
    for( i=0;i<len;i++)
    {
        count[arr[i]-97]++;
       // printf("%d-%d ",count[arr[i]-97],arr[i]-97);

    }
    printf("%s\n",arr);
    }

    for(i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            for(j=1;j<=(count[i]/2);j++)
            {
                str[k++]='a'+i;
            }

            if(count[i]%2==0)
            {
                count[i]=0;
            }
            else
            {
                count[i]=1;
            }
        }
    }
     for(i=1;i<k;i++)
    {
        printf("%c",str[i]);
    }

    for(i=0;i<26;i++)
    {
        if(count[i]==1)
        {
            printf("%c",'a'+i);
            break;
        }
    }


    for(i=k-1;i>0;i--)
    {
        printf("%c",str[i]);
    }

}

