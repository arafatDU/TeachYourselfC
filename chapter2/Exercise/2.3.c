#include <stdio.h>
int main()
{
    int num1, num2, selection;
    printf("First Integer:");
    scanf("%d", &num1);
    printf("Second Integer:");
    scanf("%d", &num2);

    // make a selections
    printf("----------------------\n");
    printf("1.Add two integers \n2.Subtract two integers\n");
    printf("Make your selection:");
    scanf("%d", &selection);

    if (selection == 1)
    {
        printf("%d+%d=%d", num1, num2, num1 + num2);
    }
    else if (selection == 2)
    {
        printf("%d-%d=%d", num1, num2, num1 - num2);
    }
    return 0;
}