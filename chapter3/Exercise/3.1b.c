#include<stdio.h>
#include<conio.h>
int main(){
    char letter;

    for(letter='A';letter<='Z';letter++){
        printf("%c=%d ",letter,letter);
    }
    printf("\n");
    for(letter='a';letter<='z';letter++){
        printf("%c=%d ",letter,letter);
    }
    printf("\nDifference in ASCII code:%d",letter='a'-'A');
    return 0;
}