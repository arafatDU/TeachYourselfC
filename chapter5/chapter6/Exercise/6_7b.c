#include<stdio.h>

void ptrfunc(int *p);

int main()
{
    int var;
    ptrfunc(&var);

    printf("%d",var);
    
    return 0;
}
void ptrfunc(int *p){
    *p=-1;
}