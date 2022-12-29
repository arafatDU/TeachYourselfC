#include<stdio.h>
#include<string.h>

int main() {
    char command[80], temp[80];
    int a,b;

    for( ; ; ) {
        printf("Operation? ");
        gets(command);

        if(!strcmp(command, "quit")) break;

        printf("Enter first number: ");
        gets(temp);
        a = atoi(temp);

        printf("Enter second number: ");
        gets(temp);
        b = atoi(temp);

        if(!strcmp(command, "add")) printf("ans: %d\n", a+b);
        
        else if(!strcmp(command, "subtract")) printf("ans: %d\n", a-b);

        else if(!strcmp(command, "divide")) printf("ans: %d\n", a/b);

        else if(!strcmp(command, "multiply")) printf("ans: %d\n", a*b);

        else printf("Invalid Command!");
    }

    return 0;
}