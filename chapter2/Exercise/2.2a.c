#include <stdio.h>
int main()
{
    int num1, num2, selection;

    printf("First Number is:");
    scanf("%d", &num1);
    printf("Second Number is:");
    scanf("%d", &num2);

    printf("Make your selection:\n1 for sum\n2 for multiply\n");
    scanf("%d", &selection);

    if (selection == 1)
    {
        printf("The Sum is:%d", num1 + num2);
    }
    else if (selection == 2)
    {
        printf("The Product is:%d", num1 * num2);
    }

    return 0;
}
