#include<stdio.h>
#include<string.h>

int main()
{
    char words[][2][40]={
        "dog","Hund",
        "no","nein",
        "year","Jahir",
        "child","Kind",
        "I","Ich",
        "drive","fahren",
        "house","haus",
        "to","zu",

    };

    char english[60];
    int i;
    printf("Enter english word:");
    gets(english);

    i=0;
    while(strcmp(words[i][0]," ")){
        if(!strcmp(english,words[i][0])){
            printf("German translation:%s",words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0],""))
      printf("Not in dictionary\n");

    return 0;
}