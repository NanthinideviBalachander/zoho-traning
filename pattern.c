/* output:
 jerry
  err
   r
  err
jerry
  */

void main()
{
    char arr[50],copy[50];
    scanf("%s",arr);
    int len=strlen(arr)-1;
    int n=len;
    int mid=len/2;
   // printf("%d",mid);
    printf("%s\n",arr);
    for(int i=1;i<n;i++)
    {
        if(i>=1)
            {
                int j=i;
                while(j)
                {
                  printf(" ");
                  j--;
                }
            }

           n--;
         for(int k=i;k<=n;k++)
        {

            printf("%c",arr[k]);
        }
       printf("\n");
    }
    //int i1=mid+2;
  for(int i=mid+2;i<=len+1;i++)
  {
    //  printf("%d",i);
        for(int j=0;j<=len-i;j++)
        {
            printf(" ");

        }

           //i1--;
           for(int k=len-i+1;k<=i-1;k++)
            printf("%c",arr[k]);
        //i1++;
            printf("\n");
  }

}

