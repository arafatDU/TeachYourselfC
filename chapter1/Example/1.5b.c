#include<stdio.h>
int main(){
	int count=5;	
	int num=40;	
	int val=10;
	int result;

	result = count*num + 88/val - 19%count;
	printf(" count*num + 88/val - 19%%count: %d\n", result);

	result = (count * num) + (88/val) - (19%count);
	printf("(count * num) + (88/val) - (19%%count) = %d\n", result);

	return 0;
}
