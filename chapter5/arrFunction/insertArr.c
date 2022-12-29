#include<stdio.h>

void printArr(int a[], int n);
void sortingArr(int a[], int n);
void insertArr(int a[], int n, int target);


int main() {
    int arr[5] = {7,5,3,4,2};
    sortingArr(arr,5);

    int arr2[10]={0};
    for(int i=0; i<5; i++) arr2[i] = arr[i];


    //inserting 6
    insertArr(arr2,10,6);
    printArr(arr2,10);

    return 0;
}


void insertArr(int a[], int n, int target) {
    int i;
    for(i=0; i<n; i++) if(target < a[i]) break;
    int location = i;

    for(int i=n; i>=location; i--) a[i+1] = a[i];

    a[location] = target;
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