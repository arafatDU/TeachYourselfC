#include<stdio.h>

void convert(void);

int main(){

    convert();

    return 0;
}


void convert(void){
    float dollar,pound;

    printf("Dollar:");
    scanf("%f",&dollar);
    pound=.5*dollar;
    printf("%.2f dollar(s) equals %.2f pound(s)",dollar,pound);

}
