#include<stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,n,m=0,k=0,x=0,a,b[1000],c[1000],y;
 scanf("%d",&n);
 if(n%2==0) y=n/2;
 else y=1+n/2;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
    scanf("%d",&a);
if(j>=n/2&&i<y)
b[k++]=a;
if(i>=n/2&&j<y)
c[m++]=a;
}
}
for(i=0;i<k;i++)
{
  for(j=0;j<k;j++)
  {
   if(b[i]==c[j])
   {
    c[j]=-1;
    x++;break;
   }
  }
}printf("%d",x);
}




#include<stdio.h>
#include <stdlib.h>
/*

4
1 2 3 4
4 3 2 1
1 2 3 4
4 3 2 1
4

*/
/*int main()
{
   int arr[40][40],n,count=0,index=1,index1=1;
   int pos,num1[40],num2[40];
   scanf("%d",&n);
   if(n%2==0)
    pos=n/2;
    else
    pos=(n+1)/2;
   if(n%2==0)
    {
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           scanf("%d",&arr[i][j]);
          // printf("%d ",arr[i][j]);

          if(j>pos && i<=pos)
           {
               num1[index]=arr[i][j];
            //  printf("%d-%d-%d ",num1[index],i,j);
               index++;
           }
           else if(j<=pos && i>pos)
           {
               num2[index1]=arr[i][j];
              // printf("%d-%d-%d ",num2[index1],i,j);
               index1++;
           }
       }
   }
}
 if(n%2!=0){
     for(int i=1;i<=n;i++)
        {
       for(int j=1;j<=n;j++)
       {
           scanf("%d",&arr[i][j]);
           if(j>=pos && i<=pos)
          {
              num1[index++]=arr[i][j];
           // printf("%d-%d-%d ",num1[index],i,j);

          }
           if(j>=pos && i>=pos)
          {
              num2[index1++]=arr[i][j];
            //printf("%d-%d-%d ",num2[index1],i,j);
          }
       }
        }
   for(int i=1;i<index;i++)
   {
       for(int j=1;j<index1;j++)
       {
           if((num1[i]==num2[j]) && (num2[j]!=-1))
           {
               count++;
               num2[j]=-1;
           }
       }
   }
printf("%d-",count);
 }
}
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100][100],n,count=0,index=1,index1=1;
   int pos,num1[100],num2[100];
   scanf("%d",&n);
   if(n%2==0)
    pos=n/2;
    else
    pos=(n+1)/2;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           scanf("%d",&arr[i][j]);
          // printf("%d ",arr[i][j]);
          if(n%2!=0 && j>=pos && i<=pos)
          {
              num1[index]=arr[i][j];
               index++;
          }
          if(j>pos && i<=pos && n%2==0)
           {
               num1[index]=arr[i][j];
              // printf("%d-%d-%d ",num1[index],i,j);
               index++;
           }
           if(j<=pos && i>pos && n%2==0)
           {
               num2[index1]=arr[i][j];
              // printf("%d-%d-%d ",num2[index1],i,j);
               index1++;
           }
           if(n%2!=0 && j<=pos && i>=pos)
           {
               num2[index1]=arr[i][j];
               //printf("-%d-",num2[index1]);
               index1++;
           }
       }
   }

   for(int i=1;i<index;i++)
   {
       for(int j=1;j<index1;j++)
       {
           if((num1[i]==num2[j]) && (num2[j]!=-1))
           {
               count++;
               num2[j]=-1;
           }
       }
   }
printf("%d",count);
}


