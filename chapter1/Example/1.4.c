#include<stdio.h>
int main(){
	int num;
	float f;

	printf("Enter an integer: ");
	scanf("%d", &num);

	printf("Enter a floating point number: ");	
	scanf("%f", &f);

	printf("%d\n", num);
	printf("%f\n", f);

	return 0;
}
