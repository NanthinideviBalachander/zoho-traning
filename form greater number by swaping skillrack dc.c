#include<stdio.h>
#include <stdlib.h>
// not mine to be discussed
int main()
{
    char num[100],temp;
    int length,count;
    scanf("%s%n\n%d\n",num,&length,&count);

    int i,j,pos[count];
    for(i=0;i<count;i++)
    scanf("%d ",&pos[i]);

    for(j=0;j<count;j++){
        for(i=1;i<=length;i++){
        if(i==pos[j]){

            if(i>1&&num[i-2]<num[i-1]){
                temp=num[i-1];
                num[i-1]=num[i-2];
                num[i-2]=temp;
            }

            else if(i<length&&num[i-1]<num[i]){
                temp=num[i-1];
                num[i-1]=num[i];
                num[i]=temp;
            }
        }
        }
    }


    printf("%s",num);

}
