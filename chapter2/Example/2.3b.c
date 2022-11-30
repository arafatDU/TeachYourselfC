#include <stdio.h>
int main()
{
    int ans;
    printf("what is 10 + 14? ");
    scanf("%d", &ans);
    if (ans == 10 + 14)
        printf("right");
    else
    {
        printf("you are worng");
        printf("the ans is 24");
    }
    return 0;
}
