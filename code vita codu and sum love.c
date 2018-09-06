#include<math.h>
main()
{
    int n,x,sum=0;
    char *arr;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d ",&x);
         *arr=pow(2,x);
         *arr=strlen(*arr)>2?(*arr)%100:(*arr);
         sum+=*arr-'0';
         printf("%d",sum);
    }
    printf("%d",(sum%100));

}
