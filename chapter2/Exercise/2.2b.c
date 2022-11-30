#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if ((n % 2) == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}