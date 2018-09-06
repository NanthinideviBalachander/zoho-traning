main()
{
    int count[128]={0},n;
    char arr[40];
    scanf("%d",&n);
    for(int index=0;index<n;index++)
    {
        scanf("%s ",arr);
        int flag[128]={0};
        for(int i=0;arr[i]!='\0';i++)
        {
            if(/*(count[arr[i]]==index || count[arr[i]]==index-1 )&&*/ flag[arr[i]]!=1)
            {
                count[arr[i]]++;
                flag[arr[i]]=1;
            }
        }
    }
    for(int i=0;i<128;i++)
    {
        if(count[arr[i]]>=n-1)
            printf("%c ",i);
    }
}





#include<stdio.h>
#include <stdlib.h>

int main()
{
  char arr[100000];
  int n,count[128]={0};
  scanf("%d\n",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%s ",arr);
      int flag[128]={0};
      for(int j=0;arr[j]!='\0';j++)
      {
          if((count[arr[j]]==i || count[arr[j]]==i-1 )&&(flag[arr[j]]!=1))
          {
              count[arr[j]]++;
              flag[arr[j]]=1;
          }
      }
  }
  for(int i=0;i<128;i++)
  {
      if(count[i]>=n-1)
      printf("%c",i);
  }

}
