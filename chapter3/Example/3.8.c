#include <stdio.h>
int main(void){
int total, i, j;
total = 0;
do{
    printf ("Enter next number (0 to stop):");
    scanf("%d", &i);
    printf("Enter number again:");
    scanf ("%d", &j);
    if(i != j){
        printf("Mismatch\n") ;
        continue;
    }
    total = total + i;
}while(i);

printf("Total is %d\n", total);
return 0;
}