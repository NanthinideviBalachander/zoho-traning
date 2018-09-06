/*
op:
print all in caps
only first and last in caps
print odd and even names
print the odd in camel case
print even in camel case
*/
void main()
{
    char name[10][50];
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        scanf("%s",name[i]);
    }
printf("\nprint the names in caps\n");
    for(int i=1;i<=num;i++)
    {
        int len=strlen(name[i]);
        for(int j=0;j<=len;j++)
        {
            char a=toupper(name[i][j]);
             printf("%c",a);
        }
    printf("\n");
    }
printf("\nprint the first and last letter in upper case\n");
    for(int i=1;i<=num;i++)
    {
        int len=strlen(name[i])-1;
        for(int j=0;j<=len;j++)
        {
            if(j==0 || j==len)
            {
             char a=toupper(name[i][j]);
             printf("%c",a);
            }
            else
                printf("%c",name[i][j]);

        }
     printf("\n");
    }
printf("\nprint only the odd names\n");
   for(int i=1;i<=num;i+=2)
    {
        int len=strlen(name[i])-1;
        for(int j=0;j<=len;j++)
        {
            printf("%c",name[i][j]);

        }
     printf("\n");
    }
printf("\n print only the even names\n");
  for(int i=2;i<=num;i+=2)
    {
        int len=strlen(name[i])-1;
        for(int j=0;j<=len;j++)
        {
            printf("%c",name[i][j]);

        }
     printf("\n");
    }
printf("\n print the even in reverse\n");
  for(int i=2;i<=num;i+=2)
    {
        int len=strlen(name[i])-1;
        for(int j=len;j<=0;j--)
        {
            printf("%c",name[i][j]);

        }
     printf("\n");
    }
printf("\nprint the camel case\n");
int count=1;
for(int i=1;i<=num;i++)
    {
        int len=strlen(name[i])-1;
        for(int j=0;j<=len;j++)
        {
            if(count==1)
            {
             char a=toupper(name[i][j]);
             printf("%c",a);
             count=0;
            }
            else if(count==0)
            {
               printf("%c",name[i][j]);
               count=1;
            }


        }
     printf("\n");
    }
}
