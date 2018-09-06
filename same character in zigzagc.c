#include<stdio.h>
#include <stdlib.h>

int main()
{
   int n,count=0,flag=0,count1=0;
   scanf("%d",&n);
   char arr[20][50],arr1[100],arr2[100],temp[2];
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
       scanf("%s",temp);
       arr[i][j]=temp[0];
       }
       //printf("%s\n ",arr[i]);
   }
   for(int i=1;i<=n;i++)
   {
       if(i%2!=0){
       for(int j=1;j<=n;j++){
       arr1[++count]=arr[i][j];
      // printf("%c-",arr1[count]);
       }
       }
       else{
           for(int j=n;j>=1;j--){
           arr1[++count]=arr[i][j];
        //   printf("%c-",arr1[count]);
           }
       }
   }
   for(int i=n;i>=1;i--)
   {
       if(i%2!=0)
       {
           for(int j=n;j>=1;j--)
           arr2[++count1]=arr[i][j];
       }
       else
       {
           for(int j=1;j<=n;j++)
           {
               arr2[++count1]=arr[i][j];
           }
       }
   }
   flag=0;
   int g=1;
   //printf("\n%d\n",count1);
   for(int i=1;i<=(n*n);i++)
   {
       if(arr1[i]==arr1[count1])
       {
           flag=1;
           //printf("%c ",arr1[i]);
           arr2[g]=arr1[i];
           g++;
       }
       count1--;

   }
   if(flag==0)
   {
   printf("-1");
   exit(0);
   }
   else
   {
       for(int i=1;i<g;i++)
       {
           if(isalpha(arr2[i])){
           for(int j=i+1;j<g;j++)
           {
               if(arr2[i]==arr2[j])
               arr2[j]='*';
           }
           }
           if(isalpha(arr2[i]))
           printf("%c ",arr2[i]);
       }
   }

}
