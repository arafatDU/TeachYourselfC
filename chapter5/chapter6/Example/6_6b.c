#include<stdio.h>

int main()
{

    char *ptr,**ptr2,str[100];
    ptr=str;
    ptr2=&ptr;

    printf("Enter your string:");
    gets(*ptr2);
    printf("Hi %s",*ptr2);

    return 0;
}