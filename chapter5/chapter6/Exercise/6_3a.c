#include<stdio.h>

int main()
{

    int temp[5]={15,58,69,14,12};
    int *ptr;
    ptr=temp;
    printf("%d",*(ptr+3));

    return 0;
}