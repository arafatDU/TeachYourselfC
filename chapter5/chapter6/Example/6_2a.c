#include<stdio.h>

int main()
{

    char *cp,ch;
    int *ip,i;
    float *fp,f;
    double *dp,d;

    cp=&ch;
    ip=&i;
    fp=&f;
    dp=&d;

    printf("%p %p %p %p\n",cp,ip,fp,dp);

    cp++;
    ip++;
    fp++;
    dp++;

    printf("%p %p %p %p\n",cp,ip,fp,dp);

    return 0;
}