main()
{
    char arr[50],str[50];
    int count[26]={0},j=1,k=1,i;
    scanf("%s",arr);
    int len=strlen(arr);
    for( i=0;i<len;i++)
    {
        count[arr[i]-97]++;
       // printf("%d-%d ",count[arr[i]-97],arr[i]-97);

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
   /* for(int i=0;i<26;i++)
    {
        if(count[i]%2==0 && count[i]>0)
        {
            count[i]/=2;
           while(count[i])
            {
                str[j]=i+97;
               // printf("%c-%d-%d",str[j],count[i],i+97);
                j++;
                count[i]--;
            }
            count[i]=0;
        }
        else if(count[i]>0 && count[i]%2!=0)
        {
            count[i]/=2+1;
            while(count[i])
            {
                str[j]=i+97;
                printf("%c-%d-%d",str[j],count[i],i+97);
                j++;
                count[i]--;
            }
            count[i]=1;
        }
    }*/
    /*int len2=strlen(str)-2;
    for(int i=len2;i>0;i--)
    {
        printf("%c",str[i]);
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==1)
        {
            printf("%c",i+97);
            break;
        }
    }
    for(int i=1;i<=len2;i++)
    {
        printf("%c",str[i]);
    }*/
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

