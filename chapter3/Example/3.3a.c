//This code takes char variable as input bar 'q'
#include<conio.h>
#include<stdio.h>
int main(){
    int i;
    char ch;

    ch= 'a'; //give ch an initial value

    for(i=0;ch!='q';i++){
        printf("pass: %d\n",i);
        ch=getche();
        printf("\n");
    }

    return 0;
}