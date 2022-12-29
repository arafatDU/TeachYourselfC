#include<stdio.h>

int main(void){
    float item[100], temp;
    int a, b;
    int count;

    printf("How many numbers? ");
    scanf("%d", &count);
    for(a=0; a<count; a++) scanf("%f", &item[a]);

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

    for(int i=0; i<count; i++) printf("%f\t",item[i]);

    return 0;
}