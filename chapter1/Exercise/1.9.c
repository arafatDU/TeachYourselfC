#include <stdio.h>

int outnum(int integar);

int main(void)
{
    outnum(1);
    outnum(15);
    outnum(21);

    return 0;
}

int outnum(int integar)
{
    printf("%d \n", integar);
}