char arr[50];
pal(int i,int j)
{
    int count=0;
    if(arr[i]==arr[j])
    {
        while(i<=j)
        {
               if(arr[i]==arr[j])
                count++;
               else
                return 0;
               i++;
               j--;
        }
        return count;
    }
    else
        return 0;
}
void main()
{

    scanf("%[^\n]",arr);
    int len=strlen(arr)-1,x,y,result=0,max=0;
    for(int i=0;i<=len;i++)
    {
        for(int j=len;j>=0;j--)
        {
           result=pal(i,j);
           if(result>max)
           {
               max=result;
               x=i;
               y=j;
           }
        }
    }
    for(int i=x;i<=y;i++)
    {
        printf("%c",arr[i]);
    }
}

