#include <stdio.h>
int main(void)
{
    int answer;
    printf("What is 10+14?\n");
    scanf("%d", &answer);
    if (answer == 10 + 14)
    {
        printf("Right!!");
    }
    else
    {
        printf("Wrong!!");
    }
    return 0;
}