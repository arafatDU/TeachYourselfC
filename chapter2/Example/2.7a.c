#include <stdio.h>
int main()
{
    int ran_num;
    int count = 0;

    printf("Enter a random number:");
    scanf("%d", &ran_num);

    if (ran_num > 0)
        count = 1;
    if (count == 0)
        printf("The number is negative!");
    else
        printf("The number is positive!");

    return 0;
}