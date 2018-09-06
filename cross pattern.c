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
    //printf("%s\n",arr);
    for(int i=0;i<=n;i++)
    {
       for(int j=0;j<i;j++)
       {
           printf(" ");
       }
        printf("%c",arr[i]);
        if(i==mid)
            break;
         for(int k=i;k<=n;k++)
        {
            if(k==n)
            printf("%c",arr[k]);
            else
                printf(" ");
        }
        n--;
       printf("\n");
    }
printf("\n");
    //int i1=mid+2;
    int j=mid-1 ;
      n=mid+1;
   for(int i=mid+1;i<=len+1;i++)
  {
    //  printf("%d",i);
        for(int j=0;j<=len-i;j++)
        {
            printf(" ");

        }
       printf("%c",arr[j]);
       j--;
           //i1--;
    for( int k=j;k<=n;k++)
    {
      if(k==n)
        printf("%c",arr[i]);
      else
        printf(" ");
    }
        n++;

        //i1++;
    printf("\n");
  }


}

/*if(i>=0)
            {
                int j=i;
                while(j)
                {
                  printf(" ");
                  j--;
                }
            }

           n--;
*/
