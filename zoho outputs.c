int main()
{
/* for(int i=1;i<=5;i++)
 {
     int k=5-i;
    while(k)
    {
         printf(" ");
         k--;
    }

     for(int j=1;j<=i;j++)
     {
         printf("%c",i+96);
     }
     printf("\n");
 }*/
 /*char letter;
 int n=5,count=0;
 for(int i=1;i<=5;i++)
 {
     letter='A';
     int k=5-i;
     while(k)
     {
         printf(" ");
         k--;
     }
     for(int j=1;j<=i;j++)
     {
         printf("%c",letter);
         letter++;
         count++;
         //printf("%d",count);
     }
     if(i==1){
            printf("\n");
        continue;
     }
     if(i==2)
     {
         count--;
     }
     --letter;
     for(int j=1;j<count;j++)
     {
         printf("%c",--letter);
          //letter--;
     }
     count=0;
     printf("\n");
 }*/
 int count=0;
 for(int i=1;i<=5;i++)
 {
     int k=(5-i)*2;
     while(k)
     {
         printf(" ");
         k--;
     }
     count=i*2-1;
    //printf("%d",count);
    for(int j=1;j<=count;j++)
     {
         if(j%2==0)
            printf("A");
         else
            printf("*");

     }
     count=0;
     if(i==1)
     {
         printf("\n");
         continue;
     }

     for(int j=1;j<=(i*2)-2;j++)
     {
         if(j%2==0)
            printf("*");
         else
            printf("A");
     }
     printf("\n");
 }
return 0;
}

