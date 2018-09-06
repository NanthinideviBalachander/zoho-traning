#include<stdio.h>
#include <stdlib.h>

/*
op:
environment
nenrine
mark the vowel position in org string and remove it in rev string
*/
int main()
{
   char arr[40],arr1[40];
   scanf("%s",arr);
   //strrev(arr);
   int len=strlen(arr);
   len--;
   for(int i=0;i<=len;i++)
   {
       if(!(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'))
       {
           printf("%c",arr[len-i]);
       }
  }

}
