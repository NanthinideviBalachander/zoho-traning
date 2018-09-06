#include<string.h>
main()
{
    char arr[50],str[10][50],find[50];
    scanf("%s",arr);
    scanf("%s",find);
    int n,len=strlen(arr),count=0,a,b,x,y,len2=strlen(find);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(count<len)
            {
            str[i][j]=arr[count];
            count++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str[i][j]==find[0])
            {
                a=i;
                b=j;
                count++;
                for(int k=1;k<=len2;k++)
                {
                    if(str[i-1][j]==find[k] )
                    {
                        count++;
                        x=i-1;
                        y=j;
                    }
                    else if (str[i+1][j]==find[k])
                    {
                        count++;
                        x=i+1;
                        y=j;
                    }
                        else if(str[i][j-1]==find[k])
                        {
                            count++;
                            x=i;
                            y=j-1;
                        }
                        else if(str[i][j+1]==find[k])
                        {
                        count++;
                        x=i;
                        y=j+1;
                        }
                }
            }
            if(count==len2)
            {
                printf("%d-%d\n%d-%d",a,b,x,y);
                exit(0);
            }
            count=0;
           //printf("%c",str[i][j]);
        }
        printf("\n");
    }

}
