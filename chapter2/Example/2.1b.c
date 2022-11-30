#include <stdio.h>
float converter(float num)
{
    int choice;
    printf("1.Feet to Meters, 2:Meters to Feet \n");
    printf("Enter choice:");
    scanf("%d", &choice);

    if (choice == 1)
        printf("%f", num / 3.28);
    if (choice == 2)
        printf("%f", num * 3.28);
}
int main()
{
    float num;

    printf("Enter value:");
    scanf("%f", &num);

    converter(num);

    return 0;
}