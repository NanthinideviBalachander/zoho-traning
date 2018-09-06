#include<stdio.h>
#include <stdlib.h>
/*

3 4
p r r r
- - r i
- o - j

p r o
*/
int main()
{
   char arr[40][40],ch;
   int n,m,end;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           scanf("%s ",&arr[i][j]);
       }
      // scanf("\n");
   }
      scanf("%c",&ch);
   /*for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           printf("%c ",&arr[i][j]);
       }
       printf("\n");
   }*/
   if(ch=='l'||ch=='L')
     end=1;
   else
      end=m;
    for(int i=1;i<=n;i++)
    {
        for(int j=end;;)
        {
            if(arr[i][j]!='-')
            {
                printf("%c ",arr[i][j]);
                break;
            }
            if(ch=='l'||ch=='L')
              j++;
            else
               j--;
        }
    }

}
