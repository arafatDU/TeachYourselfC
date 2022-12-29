#include<stdio.h>

int main()
{

    int *ptr,i=0;
    ptr=&i;
    for( *ptr;*ptr<10;(*ptr)++){
        printf("%d ",*ptr);
    }


    return 0;
}