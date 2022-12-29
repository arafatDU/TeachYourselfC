#include<stdio.h>

int main()
{

    int *p,q;
    p=&q;
    *p=1000;
    printf("%d",q);

    return 0;
}