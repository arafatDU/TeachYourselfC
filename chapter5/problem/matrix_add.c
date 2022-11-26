#include<stdio.h>
int main(){
    int mat1[3][3], mat2[3][3], matadd[3][3];

    printf("Enter 1st matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)  scanf("%d", &mat1[i][j]);
        
        
    
    printf("Enter 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)  scanf("%d", &mat2[i][j]);
        
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matadd[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", matadd[i][j]);
        }
        printf("\n");
    }
    

   // return 0;
}