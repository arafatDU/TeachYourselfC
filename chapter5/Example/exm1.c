#include<stdio.h>
int main(void){
    int temp[31], i, min, max, avg=0;
    int days;

    printf("How many days in the month? ");
    scanf("%d", &days);

    for ( i = 0; i < days; i++)
    {
        printf("Enter noonday temparature for day %d: ", i+1);
        scanf("%d", &temp[i]);

        avg += temp[i];
    } 
    
    printf("Average temparature: %d\n", avg/days);

    min = 200;
    max = 0;
    for ( i = 0; i < days; i++)
    {
        if(min>temp[i]) min = temp[i];
        if(max<temp[i]) max = temp[i];
    }
    printf("Minimum temparature: %d\nMaximum temparature: %d\n", min, max);
    
    
    
    

    return 0;
}