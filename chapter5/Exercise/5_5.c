#include<stdio.h>

int main()
{

    char numbers[10][15]={
        "Zero",
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
    };

    char num;
    printf("Enter a number(0-9):");
    scanf(" %c",&num);

    num=num-'0';
    if(num>=0 && num<10) printf("%s",numbers[num]);

    return 0;
}