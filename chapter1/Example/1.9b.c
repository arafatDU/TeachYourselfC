#include<stdio.h>

void sqr_it( int num );

int main() {

	sqr_it(10.0);

	return 0;
}

void sqr_it (int num) {

	printf("Square: %d\n", num*num);
}
