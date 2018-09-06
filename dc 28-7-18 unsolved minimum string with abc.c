#include<stdio.h>
#include <stdlib.h>
int main()
{
    char S[100];
    int i, j, k=0, b=0, f=1;
    scanf("%s", S);
    for(i=0;i<strlen(S);i++)
        if(S[i]=='b')
            b++;
    for(i=strlen(S)-1;i>=0;i--)
        if(S[i]=='a')
            for(j=i-1;j>=0;j--)
                if(S[j]>S[i])
                {
                    if(S[j]=='c')
                        break;
                    char t=S[i];
                    S[i]=S[j];
                    S[j]=t;
                }
    for(i=0;i<strlen(S);i++)
    {
        if(S[i]=='a')
            printf("%c", S[i]);
        else
        {
            if(f)
                for(j=0, f=0;j<b;j++)
                    printf("b");
            if(S[i]=='c')
                printf("%c", S[i]);
        }
    }
}
