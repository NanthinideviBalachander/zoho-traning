#include<stdio.h>
#include<conio.h>
void main()
{
int r=0,n,i,j,count=0;
char s[100];
clrscr();
scanf("%d",&n);
scanf("%s",&s);
for(i=0;i<n;i++)
{
if(s[i]=='G')
{
for(j=i+1;j<n;j++)
{
if(s[j]=='G')
{
i=j;
r=1;
}
else
{
i=j;
count+=r;
break;
}
}
}
else if(s[i]=='R')
{
count++;
}
}
printf("%d",count);
getch();
}
