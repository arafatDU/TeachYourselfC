#include<stdio.h>

void print_func1(void);
void print_func2(void);

int main(void){
    print_func1();
    print_func2();
    return 0;
}


void print_func1(void){
    printf("The summer soldier,");
}
void print_func2(void){
    printf("the sunshine patriot");
}
