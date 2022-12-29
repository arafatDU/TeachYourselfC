#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    char *p="stop";

    while(strcmp(p,str)){
        printf("Enter your string:");
        gets(str);
        
    }

    

    return 0;
}