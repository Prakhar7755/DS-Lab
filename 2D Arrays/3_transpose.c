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

void transpose(int arr[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i; j < 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}
void transpose2(int arr[][2], int res[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            res[i][j] = arr[j][i];
        }
    }
}

void main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int res[2][2];

    transpose(arr);
    // transpose2(arr, res);

    printMatrix(arr, 2, 2);
    // printMatrix(res, 2, 2);
}