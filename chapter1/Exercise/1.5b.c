#include<stdio.h>
//convert years into seconds
int main(){
    int year,second;
    printf("How many year? ");
    scanf("%d",&year);
    second=year*365*24*3600;
    printf("%d year(s) equals %d second(s)",year,second);

    return 0;
}
