#include<stdio.h>
#include<string.h>

int main() {
    char str[80];

    printf("Enter a string: ");
    gets(str);

    int i= strlen(str);
    for(i-1; i>=0; i--) printf("%c", str[i]);

    return 0;
}