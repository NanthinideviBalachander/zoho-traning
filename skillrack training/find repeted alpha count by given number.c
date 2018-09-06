#include<stdio.h>
#include <stdlib.h>

/*int main()
{
   char arr[40];
   int n,len,count=0,flag=0;
   scanf("%s%n %d",arr,&len,&n);
   for(int i=0;i<len;i++)
   {
       for(int j=i+1;j<=i+n-1;j++)
       {
           if(arr[i]==arr[j]){
            count++;
            printf("%d-%d$",i,j);
           }
         flag=1;
       }
      // if(flag==0 || len-i+1<n){
       for(int j=i-1;j>=n-i;j--)
       {
           if(arr[i]==arr[j]){
           count++;
           printf("%d-%d*",i,j);
           }
       }
      // }
       flag=0;
   }
   printf("%d",count);
}*/
main()
{
    char arr[40];
    int preindex[128]={0},dcount[128]={0},count=0,n;
    scanf("%s %d",arr,&n);
    for(int i=0;i<=len;i++)
    {
        if(preindex[arr[i]]>=i-n)
        {
            dcount[arr[]
        }
    }
}
