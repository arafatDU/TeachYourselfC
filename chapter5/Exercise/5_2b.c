#include<stdio.h>
#include<string.h>

int main() {
    char bigstr[1000]="", str[50];

    for( ; ; ) {
        printf("Enter a string: ");
        gets(str);

        if(!strcmp(str, "quit")) break;

        strcat(bigstr, "\n");
        if(strlen(bigstr) + strlen(str) >= 0) break;
        strcat(bigstr, str);

    }
    printf(bigstr);

    return 0;
}