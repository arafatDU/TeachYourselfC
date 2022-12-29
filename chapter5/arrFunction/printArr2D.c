#include<stdio.h>

void printArr(int a[][10], int n, int m);

int main() {
    int arr[2][10] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,20};

    printArr(arr,2,10);

    return 0;
}

void printArr(int a[][10], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}