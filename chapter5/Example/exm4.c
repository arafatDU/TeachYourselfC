#include<stdio.h>
#include<stdlib.h>

int main(void){
    int item[100];
    int a, b, c;
    int count;

    printf("How many numbers? ");
    scanf("%d", &count);
    for(a=0; a<count; a++) scanf("%d", &item[a]);

    return 0;
}