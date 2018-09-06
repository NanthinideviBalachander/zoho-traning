#include<stdio.h>
#include <stdlib.h>

/*int check(char a[],char b[] ,char c[])
{
    int lenb=strlen(b)-1,i=0 ,lena=strlen(a),lenc=strlen(c);
    if(lena!=lenc) return -1;
    char first=b[0], last=b[lenb];
    while(a[i])
    {
        if(first==a[i] && last==c[i])
           return i;
        i++;
    }
    return -1;
}
void print(char left[] , char middle[], char right[],int index)
{
    int len=strlen(middle)-1,lenleft=strlen(left)-1;
    for(int i=0;i<=lenleft;i++)
    {
        if(index==i)
        {
            printf("%s ",middle);
        }
        else
        {
            printf("%c ",left[i]);
            for(int j=0;j<=len-2;j++)
               printf(" $ ");
            printf("%c ",right[i]);
        }
        printf("\n");
    }
}
void main()
{
  char a[50],b[50],c[50];
  int index;
  scanf("%s%s%s",a,b,c);
  if((index=check(a,b,c))!=-1)
     print(a,b,c,index);
  else if((index=check(c,b,a))!=-1)
     print(c,b,a,index);
  else if((index=check(b,a,c))!=-1)
     print(b,a,c,index);
  else if ((index=check(c,a,b))!=-1)
     print(c,a,b,index);
  else if((index=check(a,c,b))!=-1)
     print(a,c,b,index);
  else if ((index=check(b,c,a))!=-1)
     print(b,c,a,index);
 } */

/*int main()
{
    int t,n,a[100],i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++){

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
      if((j+1)<t)
        printf("\n");
    }
    return 0;
}*/
/*struct employee
{
    char name[50],city[50],mail[50],desig[50],gender[20],quali[30],mstatus;
    int age,contact,yrs,salary;
    struct salary
    {
        int basic,hra,ta,da,pf;
    }sal;
}stu;
void salarycal(int salary)
{
   sal.basic=(30/100)*salary;
   sal.hra=(15/100)*salary;
   sal.ta=(10/100)*salary;
   sal.da=(8/100)*salary;
   sal.pf=(12/100)*salary+(8/100)*salary;

}
void main()
{
  for(int i=1;i<=2;i++)
  {
      scanf("%s%s%s%d%d%d%s%s%s%s%s%d",stu.name,stu.city,stu.mail,&stu.age,&stu.contact,&stu.yrs,stu.desig,stu.gender,stu.quali,stu.mstatus,stu.salary);
  }
  salarycal(stu.salary);
  for(int i=1;i<=2;i++)
  {
      printf("%s\n%d\n%d\n%s\n%s\n%s\n%s\n%s\n%s\n%s",stu.name,stu.age,stu.contact,stu.city,stu.mail,stu.desig,stu.gender,stu.quali,stu.mstatus);
  }
}*/

void arithmetic()
{
    int choice,sum=0,num1,num2;
    printf("\nenter 1.add , 2. sub ,3.multiple,4.divide 5.mod");
    scanf("%d%d%d",&choice,&num1,&num2);
    switch(choice)
    {
        case 1://while(scanf("%d",&num)>0)

            sum=num1+num2;

        break;
        case 2://while(scanf("%d",&num)>0)

            sum=num1-num2;

        break;
       case 3:/*sum=1;
           while(scanf("%d",&num)>0)
        {*/
            sum=num1*num2;

        break;
      case 4:
      //while(scanf("%d",&num)>0)

            sum=num1/num2;

        break;
    case 5:
       // while(scanf("%d",&num)>0)

            sum=num1%num2;

        break;
   default: printf("\ninvalid input");
    }
    printf("\n%d",sum);
}
void inc()
{
    int value ,choice;
    printf("\nenter 1.increment 2.decrement");
    scanf("%d%d",&value,&choice);
    switch(choice)
    {
        case 1: printf("\n%d",++value);break;
        case 2: printf("\n%d",--value);break;
        default: printf("invalid");
    }
}
void type()
{
    char arr[50];
    printf("\nenter the value to find type");
    scanf("%s",arr);
    int len=strlen(arr);
    printf("\n%s",arr);
    if(len==1 && isalpha(arr[0]))
    {
        printf("character");
    }
    else if(isdigit(arr[0])==0 && len!=1)
    {
        printf("\nString  %s",arr);
    }
    else if(isdigit(arr[0]))
    {
        int i=0;
        while(i<=len)
        {
            if(arr[i]=='.')
            {
                printf("float  %s",arr);
                break;
            }
            //len--;
             i++;
        }
    }
    else
    {
        printf("\nInteger  %s",arr);
    }
}
void casting()
{
    int choice;
    char arr;
    int value;
    printf("\nEnter the casting choice \n1.char-int  \n 2.int-char");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:scanf("%s",arr);
               printf("\n%d",arr);break;
       case 2:scanf("%d",value);
               printf("\n%c",value);break;

    }
}
void choice()
{
    int choice;
    printf("\nenter 1.arithmetic\n 2.increment and decrement \n 3.to find type \n4.type cast");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:arithmetic();break;
        case 2:inc();break;
        case 3:type();break;
        case 4:casting();break;
        default: exit(0);
    }
}
void main()
{

    printf("CALCULATOR");
    choice();
}


