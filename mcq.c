

    /*char arr[]="monopoly";
    int i=0;
    do
    {

        i+=2;
    }while(arr[i]!='\0');
    printf("%d",i);*/

    /*int a=5,b=6,c=7;
    if(a<b-1)
        printf("1");
    else
        printf("2");
    if(a>b)
        printf("3");
    else
        printf("4");*/
    /*char x=10;
    for(int i=1;i<=5;i++)
    {

        x='*';
        printf("%c",x);
    }*/
   /* int num=123456;
    printf("%d",num/10%10);*/
    /*int val=1;
    switch(val<<val+val+val)
    {
        default:printf("def");
        case 2: printf("%hi",val);break;
        case 4: printf("two");break;
        case 8: printf("three");
    }*/
   /* register num=500;
    int *p;
    p=&num;
    printf("%d",*p);*/
    /*int i=2,j=2;
    while(i+1?--i:j++)
    {

        printf("%d",i);
    }*/
   /* char arr[]="tig\0er";
    printf("%s",arr);*/
  /*  int x=1;
    int i={printf("c" "is" "great")};
    for(;x<=i;x++)
    {

        printf("%x",x);
    }*/
    /*int x[10]={20};
    printf("%d",x[0]);
    printf("%d",x[9]);*/
   /* int x,v=0;
    x=-++v+ ++-v;
    printf("%d",v);*/
  /*  int b;
    int a=++b=5;
    printf("%d%d",a,b);*/
/*    int x=10;
    x=+x++;
    printf("%d",x);*/
    /*int arr[2]={10.9,10.8};
    printf("%d",arr[0]+arr[1]);*/
  /*  dis(float v)
    {
        printf("float");
    }
    dis (double v)
    {

        printf("d");
    }
dis(10.58);*/

/*char arr[10]="B";
int *ptr=arr;
printf("%d",*arr);*/

/*int x=10;
int sum=10;
while(x--);
printf("%d",x);
{
    sum+=x--;

}
printf("%d-%d",sum,x);
*/
/*
int x;
scanf("%d",&x);
int s=0;
while(x--)
{
    s+=x/2;
    x/=10;
}
printf("%d",s);*/
/*#define msg(x,y) printf(#x"is" #y)

msg(ana,vic);*/
int main(int argc, char *argv[])
{
	int a,b,sum;
	if(argc!=3)
	{
	    a = atoi(argv[1]);
	b = atoi(argv[2]);
		printf("please use \"prg_name value1 value2 \"\n");
		return -1;
	}

	sum = a+b;

	printf("Sum of %d, %d is: %d\n",a,b,sum);

	return 0;
}

