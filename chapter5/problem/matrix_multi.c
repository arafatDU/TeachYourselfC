#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], matpro[3][3];

    printf("Enter 1st matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);

    printf("Mat A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Mat B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", mat2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matpro[i][j] = 0;

    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matpro[k][i] += mat1[k][j] * mat2[j][i];
            }
        }
    }

    printf("Mat A x Mat B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", matpro[i][j]);
        }
        printf("\n");
    }

    // return 0;
}