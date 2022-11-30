/* A program with two function */
#include<stdio.h>

void func1(void);  /* prototype for func1{} */

int main(){
	printf("I ");
	func1();
	printf("C.\n");

	return 0;
}

void func1(void){
	
	printf("like ");
}
