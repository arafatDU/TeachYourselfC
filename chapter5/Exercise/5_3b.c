#include<stdio.h>

int main() {
    int arr[3][3][3];
    int i,j,k,x=1;
    int sum=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0;k<3; k++) {
                arr[i][j][k] = x;
                x++;
                sum += arr[i][j][k];
            }
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0;k<3; k++) printf("%d\n", arr[i][j][k]);
        }
    }

    printf("\n\nSum is: %d\n", sum);

    return 0;
}