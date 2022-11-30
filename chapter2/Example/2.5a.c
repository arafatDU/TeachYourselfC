#include <stdio.h>
int main()
{
    int answer, count;
    for (count = 1; count < 11; count++)
    {
        printf("what's %d+%d=", count, count);
        scanf("%d", &answer);
        if (answer == count + count)
            printf("Right!\n");
        else
        {
            printf("Sorry,you're wrong! ");
            printf("The answer is %d\n", count + count);
        }
    }

    return 0;
}