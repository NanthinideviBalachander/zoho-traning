# include<stdio.h>
 char name[50];
 int len;
rev(int i)
{
    //printf("\n%d",i);
    for(int j=i;j<=len;j++)
        printf("%c",name[j]);

}
main()
{
  int i;
    scanf("%[^\n]",name);
    len=strlen(name);
    for( i=len;i>=0;i--)
    {
        if(name[i]==' ')
        {
            rev(i+1);
            name[i]='\0';
            len=strlen(name);
        }
    }
    printf("%s",name);
}
