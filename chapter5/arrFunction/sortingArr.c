#include<stdio.h>

void sortingArr(int a[], int n);
void printArr(int a[], int n);

int main() {
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};

    sortingArr(arr,10);
    printArr(arr,10);

    return 0;
}

void sortingArr(int a[], int n){
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j] =a [j+1];
                a[j+1] = temp;
            }
        }
    }
}

void printArr(int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}