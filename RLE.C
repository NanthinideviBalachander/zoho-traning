#include<stdio.h>
#include<conio.h>
void main()
{
char s[500];
int o=0,i,k;
char *ptr,st[100];
clrscr();
fgets(s,500,stdin);
ptr=s;
while(sscanf(ptr,"%s%n",&st,&o)==1)
{
char *pt=st;
char c;
int d=0,i=1;
while(sscanf(pt,"%c%n",&c,&d)==1)
{
int n=c;
n=n-64;
if(i%2==1)
{
for(k=1;k<=n;k++)
{
printf("0");
}
}
else
{
for (k=1;k<=n;k++)
{
printf("!");
}
}
pt+=d;
i++;
}
printf("\n");
ptr+=o;
}
getch();
}