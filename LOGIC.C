#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j,sum=6,k=1,t;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(t=0;t<n-i;t++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%05d ",sum);
sum+=(16*(k+1))-10;
k++;
}
printf("\n");
}
getch();
return 0;
}
