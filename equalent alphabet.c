main()
{

    char arr[50];
    int count[26]={0};
    scanf("%s",arr);
    int len=strlen(arr),sum=0;
    for(int i=0;i<len;i++)
    {
       count[i]=arr[i]-97;
       sum=26-count[i];
       //printf("%d ",sum);
       printf("%c ",sum+96);
    }
}
