#include<stdio.h>
#include<stdlib.h>

int main(void){
    int item[100];
    int a, b, temp;
    int count;

    printf("How many numbers? ");
    scanf("%d", &count);
    for(a=0; a<count; a++) scanf("%d", &item[a]);

    //bubble sort
    for(a=1; a<count; a++){
        for(b=count-1; b>=a; --b){
            if(item[b-1] > item[b]) {
                temp = item[b-1];
                item[b-1] = item[b];
                item[b] = temp;
            }
        }
    }

    for(int i=0; i<count; i++) printf("%d\t",item[i]);

    return 0;
}