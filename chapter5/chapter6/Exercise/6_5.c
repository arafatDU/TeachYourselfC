#include<stdio.h>
#include<string.h>
int main()
{

    char *str[3]={
        "Yes","No","Maybe.Rephrase the question"
    };


    char question[80];
    printf("Enter your question:");
    gets(question);
    int length=strlen(question);
    int index=length%3;
    printf(str[index]);

    return 0;
}