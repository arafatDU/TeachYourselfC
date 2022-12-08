#include<stdio.h>

int main()
{
    short int si;
    long int li;

    li= 100000;
    si= li; //convert to short int

    printf("%hd ", si);

    return 0;
}