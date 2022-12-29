#include<stdio.h>
int main(void){
    int a[10], match;

    printf("Enter ten number:\n");
    for(int i=0; i<10; i++) scanf("%d", &a[i]);

    // see if any match
    for(int i=0; i<10; i++){
        match = a[i];
        for(int j=i+1; j<10; j++) {
            if(match == a[j]) printf("%d is duplicated.\n", match);
        }
    }
    return 0;

    return 0;
}