#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
	for (int i = 2; i <=num; i += 1)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
