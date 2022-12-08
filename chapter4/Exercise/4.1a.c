#include<stdio.h>

int main()
{

    unsigned long int distance;
    printf("Enter distance:");
    scanf("%lu",&distance);

    printf("Time taken: %lu seconds",distance/186000);

    return 0;
}