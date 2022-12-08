#include<stdio.h>
#include<conio.h>
int main(){
    int i;

    i=1;
    again:
        printf("%d ",i);
        i++;
        if(i<10) goto again;

    return 0;
}