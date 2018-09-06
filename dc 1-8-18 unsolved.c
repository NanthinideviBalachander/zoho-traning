#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,i,c[1000],t=0,n,j,l,q=0;
    scanf("%d %d",&a,&b);
    i=0;
    while(a!=0)
    {
        c[i]=a%10;
        a=a/10;
        i++;
    }
    while(b!=0)
    {
        c[i]=b%10;
        b=b/10;
        i++;
    }
    n=i-1;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(c[i]<c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    q=0;
    while(q<=n)
    {
        if(c[q]%2!=1 && c[q]!=0)
        {
            {
        i=n;
        t=0;
        while(i<=n)
        {
            if(c[i]%2!=0 || c[i]==0)
            {
                i--;
            }
            else
            {
                t=c[i];
                c[i]=c[n];
                c[n]=t;

                break;
            }
    }
    t=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(c[i]<c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    i=0;
    while(i<=n)
    {
        printf("%d",c[i]);
        i++;
    }
            }
            break;
        }
        else
        {
            if(q==n)
            {
                printf("-1");
                break;
            }
            else
            { q++; }
        }
    }
    return 0;
}
