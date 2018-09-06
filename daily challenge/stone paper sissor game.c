#include<stdio.h>
#include <stdlib.h>

int main()
{
   char arr[40],arr1[40];
   int n,sec=0,fir=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%s %s",arr,arr1);
       switch(arr[0])
       {
           case 'r':if(arr1[0]=='p'){sec++;}
                    else if(arr1[0]=='s'){fir++;}break;
          case 'p': if(arr1[0]=='s'){sec++;}
                    else if(arr1[0]=='r'){fir++;}break;
            case 's':if(arr1[0]=='r'){sec++;}
                     else if(arr1[0]=='p'){fir++;}break;
       }
   }
   if(fir==sec)
   printf("Tie");
   else if(fir>sec)
   printf("1");
   else
   printf("2");

}
