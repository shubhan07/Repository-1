/*
- File Owner: Rushil Tolia
- PRN: 1262252066
- Batch: I2
- Decription: This program performs various operations on two matrices, including addition, subtraction, transpose, finding the smallest and largest elements, multiplication, inverse, checking for saddle points, and determining if the matrix is a magic square.
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    int a[10][10], b[10][10], res_mat[10][10];
    int saddle = 0;
    int magic = 1;
    int rowSum, colSum, diag1 = 0, diag2 = 0;

    printf("Enter the order of matrix - ");
    scanf_s_s("%d", &n);

    printf("Enter elements of matrix A - \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s_s("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B - \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s_s("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    printf("\nAddition of matrices -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res_mat[i][j] = a[i][j] + b[i][j];
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }

    // Matrix Subtraction
    printf("\Subtraction of matrices -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res_mat[i][j] = a[i][j] - b[i][j];
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }

    // Matrix Transpose
    printf("\Transpose of matrix A -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res_mat[i][j] = a[j][i];
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }
    printf("\Transpose of matrix B -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res_mat[i][j] = b[j][i];
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }

    // Matrix Smallest no
    printf("\Smallest no of matrix A -\n");
    int small_val_r;
    int small_val_c;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (res_mat[10][10] <= a[i][j]) {
                res_mat[10][10] = a[i][j];
                small_val_c = j;
                small_val_r = i;
            }
        }
    }
    printf("%d", res_mat[small_val_r][small_val_c]);
    printf("\Smallest no of matrix B -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (res_mat[10][10] <= b[i][j]) {
                res_mat[10][10] = b[i][j];
                small_val_c = j;
                small_val_r = i;
            }

        }
    }
    printf("%d", res_mat[small_val_r][small_val_c]);

    // Matrix Largest no
    printf("\Largest value of matrix A -\n");
    int large_val_r;
    int large_val_c;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (res_mat[10][10] > a[i][j]) {
                res_mat[10][10] = a[i][j];
                large_val_c = j;
                large_val_r = i;
            }
        }
    }
    printf("%d", res_mat[large_val_r][large_val_c]);

    printf("\Largest value of matrix B -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (res_mat[10][10] > b[i][j]) {
                res_mat[10][10] = b[i][j];
                large_val_c = j;
                large_val_r = i;
            }
        }
    }
    printf("%d", res_mat[large_val_r][large_val_c]);

    // Matrix Multiplication
    printf("\Multiplication of matrices -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res_mat[i][j] = a[i][j] * b[j][i];
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }

    // Matrix Inverse
    printf("\Inverse of matrices -\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res_mat[i][j] = a[i][j] * b[j][i];
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }

    // Saddle Point
    for (i = 0; i < n; i++)
    {
        int min = a[i][0], col = 0;
        for (j = 1; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                col = j;
            }
        }

        int flag = 1;
        for (j = 0; j < n; j++)
        {
            if (a[j][col] > min)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("\nSaddle point found - %d\n", min);
            saddle = 1;
        }
    }

    if (!saddle)
    {
        printf("\nNo saddle point found\n");
    }

    // Magic Square
    for (i = 0; i < n; i++)
    {
        rowSum = colSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += a[i][j];
            colSum += a[j][i];
        }
        if (rowSum != colSum)
            magic = 0;
    }

    for (i = 0; i < n; i++)
    {
        diag1 += a[i][i];
        diag2 += a[i][n - i - 1];
    }

    if (diag1 != diag2)
        magic = 0;

    if (magic)
        printf("\nMatrix is a magic square\n");
    else
        printf("\nMatrix is not a magic square\n");

    return 0;
}