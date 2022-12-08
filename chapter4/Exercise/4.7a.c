#include<stdio.h>

int main()
{
    float i;
    for (i=1.0; (int)i<=10; i= i+0.1)
    printf("%f\n", i);
    return 0;
}