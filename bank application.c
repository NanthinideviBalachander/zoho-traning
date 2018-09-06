struct bank
{
    char uname[50];
    char pass[20];
    char brname ;
    char name;
    char mail;
    int contact,ifccode,date;
    int balance;
}b;
int count=0;
deposit()
{
    int dep;
    printf("\nEnter the Amount for deposit");
    scanf("%d",&dep);
    b.balance+=dep;
    printf("\nAmount deposited successfully");
}
widthdraw()
{
    int with;
    printf("\nEnter the Amount to be widthdraw");
    scanf("%d",&with);
    count++;
    if(b.balance>=5000)
    {
    if(count>=4)
    {
        b.balance=b.balance-
        with-20;
    }
    else
        b.balance=b.balance-with;
    }
    else
    {
        printf("\nInsufficient balance");
    }
}
checking()
{
   printf("\nYour current balance is%d",b.balance);
}
details()
{
    printf("\nName:Hello");
    printf("\nBranch Name: Pondicherry");
    printf("\nIFC code 1000099988");
    printf("\nMail:hello@gmail.com");
    printf("\nBalance:%d",b.balance);
}
void main()
{
    char user[20]="hello",password[20]="hello";
    int choice;
    printf("--------------BANK APPLICATION-----------------");
    printf("\nEnter the user name and password");
    scanf("%s %s",b.uname,b.pass);
    if(strcmp(b.uname,user)==0 && strcmp(b.pass,password)==0)
    {
        printf("\n Valid User \n");
        printf("\nEnter the min.balance\n");
        scanf("%d",&b.balance);
        //printf("\nEnter the date");
        //scanf("%d",&date);
        while(1)
        {
            printf("\n Enter the choice::: \n 1.deposit \n2.widthdraw \n3.checking balance \n4.checking details\n5.exit");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:deposit();break;
                case 2:widthdraw();break;
                case 3:checking();break;
                case 4:details();break;
                case 5:exit(0);
                default:printf("\n Invalid enter the correct option");
            }
        }
    }
    else {
        printf("\nInvalid user");
        exit(0);
    }

}
