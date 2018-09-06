#include<stdio.h>
#include <stdlib.h>
// to find the binary value of a given number(count) is present in given matrix or not ,.
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
   int bin;scanf("\n%d",&bin);
   int b[1002],p=0;
   while(bin!=0)
   {
       b[p]=bin%2;
       bin=bin/2;
       p++;

   }
   int flag=0,index=p-1,count=0;
 for(int i=0;i<r;i++)
 {

     for(int j=0;j<c;j++)
     {
         index=p-1;
         flag=0;
         for(int l=j;l<c;l++)
         {

        if(a[i][l]==b[index] && index>=0)
        {

            flag=0;
            index--;
        }

        else
        {
            flag=-1;
            break;

        }
        if(index==-1 && flag==0)
        count++;

         }


      }

 }
 flag=0,index=p-1;

 for(int i=0;i<c;i++)
 {
     for(int j=0;j<r;j++)
     {
         index=p-1;
         flag=0;
        //  printf("%d ",a[j][i]);
        for(int q=j;q<r;q++)
        {
            if(a[q][i]==b[index] && index>=0)
            {
                flag=0;
                index--;

            }
            else
            {
            flag=-1;
            break;
            }

            if(index==-1 && flag==0)
            count++;
        }
     }

 }
printf("%d ",count);

}
