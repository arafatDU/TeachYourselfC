#include<stdio.h>

int countOddArr(int a[], int n);

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Number of Odd numbers: %d\n",countOddArr(arr,10));

    return 0;
}


int countOddArr(int a[], int n) {
    int count =0;
    for(int i=0; i<n; i++) {
        if(a[i]%2 != 0) count++;
    }
    return count;
}