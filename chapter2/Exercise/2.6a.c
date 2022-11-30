#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the last number:");
    scanf("%d", &num);
    printf("n n^2 n^3\n");
    printf("----------------\n");
    for (int i = 1; i <= num; i++)
    {
        printf("%d, %d, %d\n", i, i * i, i * i * i);
    }

    return 0;
}