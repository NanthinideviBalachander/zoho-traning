 #include<stdio.h>
#include <stdlib.h>

/*int main()
{
   char arr[40],n[40],m[40];
   int len,len1,len2,count1=0,count2=0;
   scanf("%s%n\n",arr,&len);
   scanf("%s",n);
   scanf("%s",m);
   len1=strlen(n);
   len2=strlen(m);
   for(int i=0;i<len;i++)
   {
       for(int j=0;j<len1;j++)
       {
           if(arr[i]-'0'==n[j]-'0'&& (arr[i]!='*' && n[j]!='*'))
           {
               count1++;
               arr[i]='*';
               n[j]='*';
               break;
           }
       }
       for(int k=0;k<len2;k++)
       {
           if(arr[i]-'0'==m[k]-'0' &&(arr[i]!='*' && m[k]!='*'))
           {
               count2++;
               arr[i]='*';
               m[k]='*';
               break;
           }
       }
   }
   if(count1==len1 && count2==len2)
   printf("YES");
   else
   printf("NO");

}*/

/*

5555
55
67
no

*/
int main()
{
    int n,m ,arr,count[10]={0};
    scanf("%d\n%d\%d",&arr,&n,&m);
    while(arr>0)
    {
        count[arr%10]++;
        arr/=10;
    }
    while(n>0)
    {
       if(count[n%10]==0)
      {
            printf("no");
        return 0;
       }
       count[n%10]--;
       n/=10;
    }
    while(m>0)
    {
       if(count[m%10]==0)
      {
            printf("no");
        return 0;
       }
       count[m%10]--;
       m/=10;
    }
    printf("yes");
}
/*#define x 4+1
main()
{
    int i=5,b;
    b=++i * i++;
    printf("%d",b);
}*/
