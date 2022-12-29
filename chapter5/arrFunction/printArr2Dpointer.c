#include<stdio.h>

void printArr(int *p, int r, int c);

int main() {
    int arr[2][10] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,20};

    printArr(&arr[0][0],2,10);

    return 0;
}

void printArr(int *p, int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d\t", *(p + (i*c) + j));
        }
        printf("\n");
    }
    printf("\n");

}