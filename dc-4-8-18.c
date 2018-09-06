#include<stdio.h>
#include <stdlib.h>
// sum of product of every two digits
//12*00+14*1
/*op:
1200141
14*/
int main()
{
    char arr[40];
    int len,x=0,y=0,sum=0;
    scanf("%s%n",arr,&len);
    for(int i=0;i<len;i+=4)
    {
        if(arr[i+1]!=NULL)
        x=((arr[i]-'0')*10)+arr[i+1]-'0';
         else if(arr[i+1]==NULL)
          x=arr[i]-'0';
         if(arr[i+2]!=NULL && arr[i+3]!=NULL)
          y=((arr[i+2]-'0')*10)+arr[i+3]-'0';
          else if(arr[i+2]!=NULL)
          y=arr[i+2]-'0';
          else
          y=1;

          sum=sum+(x*y);
          //printf("%d-%d-%d-%d-%d-%d-%d\n",x,y,sum,arr[i]-'0',arr[i+1]-'0',arr[i+2]-'0',arr[i+3]-'0');
          x=0;
          y=0;
    }
    printf("%d",sum);
}
