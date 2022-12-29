#include<stdio.h>

void myputs(char *ptr);

int main()
{

  myputs("This is a string");  

    return 0;
}

void myputs(char *ptr){
    while(*ptr){
        printf("%c",*ptr);
        ptr++;
    }
}