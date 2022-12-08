#include<stdio.h>
#include<conio.h>
int main(){
    float avg_speed,distance;
    int no_of_drive_time;
    printf("No of drive time:");
    scanf("%d",&no_of_drive_time);

    for(int i=1;i<=no_of_drive_time;i++){
        printf("Enter average speed and distance:",i);
        scanf("%d,%d",&avg_speed,&distance);
        printf("Driving time:%.4f\n",avg_speed/distance);
    }

    return 0;
}