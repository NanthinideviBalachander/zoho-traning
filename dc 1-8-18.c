#include<stdio.h>
#include <stdlib.h>

int main()
{
  char arr[40],arr1[40],arr2[40];
  int l1,l2,num[40];
  scanf("%s%n %s%n",arr,&l1,arr1,&l2);
 // if(arr-'0'<arr1-'0')
   //printf("%s",arr1);
   int count=l2,j=0,i=l1;
   while(count)
   {
       arr[i]=arr1[j];
       i++;
       j++;
       count--;
   }
   for(int j=0;j<i;j++)
   {
       for(int k=j+1;k<i;k++)
       {
           if(arr[j]<arr[k])
           {
               int temp=arr[j];
               arr[j]=arr[k];
               arr[k]=temp;
           }
       }
       num[j]=arr[j]-'0';
       printf("%d ",num[j]);
   }

     printf("%d",num);
  /* if(arr-'0'%2==0 )
     printf("%s",arr);
   else if(arr-'0'%2!=0)
     printf("-1%s",arr);
   /*else if(arr[i-1]==0)
   {
       strcpy(arr1,arr);
       int temp=arr[i-1];
       arr[i-1]=arr[i-2];
       arr[i-2]=temp;
       strcpy(arr2,arr);
       temp=arr[i-1];
       arr[i]
       if(arr>a)
   }*/
}
