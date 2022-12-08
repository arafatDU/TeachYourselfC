#include<stdio.h>

int main()
{

    float avg_speed,distance;
    int n,i=1;
    printf("Total number of test:");
    scanf("%d",&n);

    while(i<=n){
        printf("Test %d\n",i);
        printf("Enter average speed:");
        scanf("%f",&avg_speed);
        printf("Enter distance:");
        scanf("%f",&distance);
        
        printf("Driving time:%f\n",distance/avg_speed);
        i++;
    }
   

    return 0;
}