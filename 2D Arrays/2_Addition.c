// STORE 10 AT EVERY INDEX OF THE 5X5 MATRIX
#include <stdio.h>
void printMatrix(int arr[][2], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
void addtion(int a[][2], int b[][2], int res[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

void main()
{
    int a[2][2] = {{1, 2}, {2, 32}};
    int b[2][2] = {{2, 99}, {2, 1}};
    int res[2][2];

    addtion(a, b, res);
    printMatrix(res, 2, 2);
}