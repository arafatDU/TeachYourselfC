#include<stdio.h>

int main()
{

    float gallons,liters;
    printf("Enter gallons:");
    scanf("%f",&gallons);

    do{
        liters=gallons*3.7854;
        printf("Liters:%f\n",liters);
        printf("Enter gallons or 0 to finish:");
        scanf("%f",&gallons);

    }while(gallons!=0);

    return 0;
}