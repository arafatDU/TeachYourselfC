#include<stdio.h>

int main()
{

    float *ptr,**ptr2,value;
    ptr=&value;
    ptr2=&ptr;
    **ptr2=3.1416;
    printf("%f %f",value,**ptr2);

    return 0;
}