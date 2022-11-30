#include <stdio.h>
int main()
{
    int num, i, is_prime;

    printf("Enter a number to test:");
    scanf("%d", &num);

    is_prime = 1;
    // starting with 2,this loop will check whether the number is a prime, by dividing the number by 2 upto num/2.
    for (i = 2; i <= num / 2; i += 1)
    {
        if (num % i == 0)
            is_prime = 0;
    }
    if (is_prime == 0)
        printf("The number is not prime!");
    else
        printf("The number is a prime!");

    return 0;
}