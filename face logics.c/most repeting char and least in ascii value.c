#include<stdio.h>
main()
{
    char arr[40],ch;
    int len,count[128]={0},pos,min=128,max=0;
    scanf("%s%n",arr,&len);
    for(int i=0;i<len;i++)
    {
        count[arr[i]]++;
        if(count[arr[i]]>count[max])
        {
           /* if(arr[i]<min)
            {
                pos=i;
                max=count[arr[i]];
                min=arr[i];
            }
            printf("%c ",arr[i]);*/
            ch=arr[i];

        }
       /* for(int i=0;i<128;i++)
        {
            if(count[i]>count[max])
             {
               // printf("%c ",arr[i]);
                 max=i;
             }
        }*/

    printf("%c",ch);
}
}
