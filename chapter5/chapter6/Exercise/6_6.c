#include<stdio.h>

int main()
{

    int *ptr1,**ptr2,value;
    ptr1=&value;
    ptr2=&ptr1;
    **ptr2=1412;
    printf("Adress of value %p\n",&value);
    printf("Adress of ptr1 %p\n",ptr1);
    printf("Adress of ptr2 %p\n",ptr2);

    return 0;
}