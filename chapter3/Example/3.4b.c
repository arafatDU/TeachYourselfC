//This program serves the purpose of an encoder.
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter your message:\n");

    ch=getche();

    while(ch!='\r') //backslash r is carriage return.Press enter to end the loop.
    {
        printf("%c ",ch+1);
        ch=getche();

    }

    return 0;
}