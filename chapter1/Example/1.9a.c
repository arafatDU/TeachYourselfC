#include<stdio.h>

int sum(int a, int b);

int main() {
	
	sum( 10-2, 9*7 );

	return 0;
}

int sum(int a, int b) {
	
	printf("Sum: %d\n", a+b);
}
