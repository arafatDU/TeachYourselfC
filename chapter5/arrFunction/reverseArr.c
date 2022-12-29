#include<stdio.h>

void reverseArr(int a[], int n);
void printArr(int a[], int n);

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    reverseArr(arr,10);
    printArr(arr,10);

    return 0;
}

void reverseArr(int a[], int n) {
    for(int i=0; i<n/2; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

}


void printArr(int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

}