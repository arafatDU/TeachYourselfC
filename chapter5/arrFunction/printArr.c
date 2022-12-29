#include<stdio.h>

void printArr(int a[], int n);

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printArr(arr,10);

    return 0;
}

void printArr(int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

}