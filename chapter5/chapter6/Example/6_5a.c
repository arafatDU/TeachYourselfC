#include<stdio.h>
#include<string.h>
int main()
{

    char *str[][2]={
        "Red Delicious","red",
        "Golden Delicious","yellow",
        "Winesap","red",
        "Gala","raddish orange",
        "Lodi","green",
        "Mutsu","yellow",
        "Cortland","red",
        "Jonathan","red",
        "",""
    };

    char apple_name[100];
    printf("Name of the apple:");
    gets(apple_name);
    int i=0;
    while(*str[i][0]){
        if(!strcmp(apple_name,str[i][0])){
            printf("Color of the apple:%s\n",str[i][1]);
        }
        i++;
    }

    return 0;
}