#include<stdio.h>
#include <stdlib.h>
/*6
A10 O20 A10 A15 O5 O10
60 50
*/
int main()
{
    int arr,app[40],orr,fruit[40],j=1,k=1,arem=0,orem=0,asum=0,osum=0,n,totapp=0,totorr=0,f=0;
    char ch;
    scanf("%d\n",&arr);
    for(int i=1;i<=arr;i++)
    {
        scanf("%c%d ",&ch,&n);
       // printf("%d%c ",n,ch);
        if(ch=='A')
        {
            fruit[j++]=ch;
            app[k++]=n;
            asum+=n;
        }
        else{
            fruit[j++]=ch;
          app[k++]=n;
          osum+=n;
        }
    }
   scanf("%d %d",&arem,&orem);
   totapp=asum+arem;
   totorr=osum+orem;
  // printf("%d-%d\n",asum,osum);
  for(int i=1;i<=arr;i++)
   {
       if(fruit[i]=='A'){
         totapp-=app[i];
        // printf("%d-%d ",app[i],totapp);
         if(totapp==totorr){
         printf("%d %d\n",totapp,totorr);
         f=1;
         }
       }
       else
       {
           totorr-=app[i];
           if(totapp==totorr){
           printf("%d %d\n",totorr,totapp);
           f=1;
           }
       }

   }
   if(f==0)
   printf("-1");
}
