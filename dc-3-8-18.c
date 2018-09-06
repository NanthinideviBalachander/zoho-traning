#include<stdio.h>
#include <stdlib.h>
// frequency of alphabet in decending order
/* hellworld
l d e h o r w  */
int main()
{
  char arr[40];
  int len,count[26]={0},a[26];
  scanf("%s%n",arr,&len);
  for(int i=0;i<len;i++)
  {
      count[arr[i]-97]++;
  }
   for(int i=0;i<26;i++)
     a[i]=i;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26-i-1;j++)
        {
            if(count[j]<count[j+1])
            {
                int t=count[j];
                count[j]=count[j+1];
                count[j+1]=t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            else if(count[j]==count[j+1])
            {
                if(a[j]>a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            printf("%c ",a[i]+97);
        }
    }
}
