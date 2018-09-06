/*#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[40],arr1[40];
   int len1,len2,k,j;
   scanf("%s%n\n%s%n",arr,&len1,arr1,&len2);
   int l=0;
   for(int i=0;i<len1;i++)
   {
       if(arr1[l]==arr[i])
       {
           k=i+1;
           for( j=l+1;j<len2;j++)
           {
               if(arr[k]==arr1[j])
               {
                   arr[k]='*';
                   k++;
               }
               else
               {
                   break;
               }
           }
           l=j;
           printf("\n%d-%c",l,arr[l]);
       }
   }
   for(int i=0;i<len1;i++)
   {
       if(arr[i]!='*')
         printf("%c",arr[i]);
   }
}*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
  char arr[40],arr1[40];
  int len1,len2,l,j,k,i,count=0;
  scanf("%s%n\n%s%n",arr,&len1,arr1,&len2);
  for(i=0;i<len1;i++)
  {
      k=i;
      if(arr[i]!='*')
    {
      for(j=0;j<len2;)
      {
          if(arr[k]==arr1[j])
          {
            //  printf("%c-",arr[k]);
              k++;
              j=0;
              count++;
             // printf("%d-%d",count,k);
          }
          else
            j++;
      }
      if(count>0)
      {
          k=i+1;
          for( l=1;l<count;l++)
          {
           // printf("%c-",arr[k]);
              arr[k]='*';
              k++;
          }
          count=0;
      }
  }
      if(arr[i]!='*')
      printf("%c",arr[i]);
  }


}
