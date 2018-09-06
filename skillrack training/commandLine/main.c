#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *arr[])
{
    int n;
    //scanf("%d",&n);
    n=atoi(arr[1]);
    int array[n],index;
    for(index=0 ;index<n;index++)
    {
        array[index]=atoi(arr[index+2]);
            printf("%d",array[index]);

    }
}
