#include<stdio.h>
#include<conio.h>
void main()
{
int a[1000],b[1000];
int min1=9999,min2=9999;
int temp=0;
int i,j,p,n,k,turbo;
clrscr();

scanf("%d",&n);
scanf("%d",&k);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}

turbo=k*2;

for(p=0;p<n;p++)
{
a[p]=a[p]+turbo;
for(i=0;i<n;i++)
{

temp=temp+a[i]*b[i];

}
a[p]=a[p]-turbo;
printf("%d ",temp);
if(temp<min1)
{
min1=temp;
}
temp=0;
}



for(p=0;p<n;p++)
{
a[p]=a[p]-turbo;
for(i=0;i<n;i++)
{

temp=temp+a[i]*b[i];

}
a[p]=a[p]+turbo;
printf("%d ",temp);
if(temp<min2)
{
min2=temp;
}
temp=0;
}
if(min1<min2)
{
printf("\n %d",min1);
}
else
{
printf("\n %d",min2);
}
getch();
}
