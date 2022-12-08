#include<stdio.h>

void soundspeed(void);

int main()
{
     soundspeed();
    
    return 0;
}

void soundspeed(void){
     float distance;
     printf("Enter distance:");
     scanf("%f",&distance);

     printf("Time taken= %.2f seconds",distance/1129.0);
}