#include <stdio.h>
int main()
{
    int i, j;

    printf("Enter first number:");
    scanf("%d", &i);
    printf("Enter second number:");
    scanf("%d", &j);
    // Results of operations are 0 or 1!

    // Relational operations

    printf("i <j %d\n", i < j);
    printf("i<=j %d\n", i <= j);
    printf("i==j %d\n", i == j);
    printf("i >j %d\n", i > j);
    printf("i>=j %d\n", i >= j);

    // Logical Operations

    printf("i && j %d\n", i && j);
    printf("i || j %d\n", i || j);
    printf("!i !j %d %d\n", !i, !j);

    return 0;
}