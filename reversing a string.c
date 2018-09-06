void main()
{
    char arr[50];
    scanf("%[^\n]",arr);
    int len=strlen(arr)-1;
    for(int i=len;i>=0;i--)
    {
        printf("%c",arr[i]);

    }
}
