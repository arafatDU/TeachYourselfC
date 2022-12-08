#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;

    do
    {
        printf("\nEnter a Character, q to quit: ");
        ch = getche();
        printf("\n");

        switch (ch)
        {
        case 'a': /* constant-expression */
            printf("Now is ");
        case 'b':
            printf("the time ");
        case 'c':
            printf("for all good men");
            break;
        case 'd':
            printf("The summer ");
        case 'e':
            printf("soldier");
        }
    } while (ch != 'q');

    return 0;
}