#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int coupon[50];
int MAX1 = 0;
int MAX2 = 0;
int skips;
void findmax(int x,int n)
{
	int i;
	int t_max = 0;
	for(i=x;i<n;i=(i+skips+1))
	{

		if((i+1)<n)
			if(coupon[i+1]>coupon[i])
			{
				t_max += coupon[i+1];
				i++;
				continue;
			}
		t_max += coupon[i];
	}
	if(t_max>MAX1)
	{
		printf("%d\n",t_max);
		MAX1 = t_max;
	}
}
void o_findmax(int x,int n)
{

	int i;
	int t_max = 0;
	for(i=x;i<n;i=(i+skips+1))
	{

		t_max += coupon[i];
	}
	if(t_max>MAX2)
	{
		printf("%d\n",t_max);
		MAX2 = t_max;
	}
}

int main()
{
	int n;
	int i;
	int n_parse;
	int max;
	scanf("%d,%d",&n,&skips);
	for(i=0;i<n;i++)
	{
		scanf("%d",&coupon[i]);
	}
	//n_parse = (n/(skips+1))+1;
	for(i=0;i<n;i++)
	{
		findmax(i,n);
		o_findmax(i,n);
	}
	max = (MAX1>MAX2)?MAX1:MAX2;
	printf("%d",max);
}
