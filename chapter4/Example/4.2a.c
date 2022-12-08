#include <stdio.h>
#include <conio.h>

void f1(void);
int count; // Global count

int main(void)
{
    count = 10;
    f1();
    printf("count in main(): %d\n");

    return 0;
}
void f1(void)
{
    int count; // local count
    count = 100;
    printf("count in f1(): %d\n", count);
}