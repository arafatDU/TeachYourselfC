#include <stdio.h>

int main()
{
    int choice;
    float num;

    printf("1:Feet to Meters\n2:Meters to Feet\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter number of feet: ");
        scanf("%f", &num);
        printf("Meters: %f", num / 3.28);
    }

    else
    {
        printf("Enter number of meters: ");
        scanf("%f", &num);
        printf("Feet: %f", num * 3.28);
    }

    return 0;
}