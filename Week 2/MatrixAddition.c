#include <stdio.h>

// FUNCTION TO INPUT THE ARRAY
void input(int M[5][5], int row, int col)
{
    int i, j;
    printf("\nenter the elements of the Matrix: \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            printf("enter [%d][%d] element of the matrix ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
}

// FUNCTION TO PRINT THE ARRAY
void display(int M[5][5], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d\t", M[i][j]);
        printf("\n");
    }
}

void addition(int A[5][5], int B[5][5], int row, int col)
{
    int C[5][5], i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    display(C, row, col);
}

int main(void)
{
    int A[5][5], B[5][5], row, col;
    printf("\nenter the no. of rows and column you want (<5):\n");
    scanf("%d%d", &row, &col);

    printf("\nEnter first matrix\n ");
    input(A, row, col);
    display(A, row, col);

    printf("\nEnter Second matrix\n ");
    input(B, row, col);
    display(B, row, col);

    printf("\nThere sum is :\n");
    addition(A, B, row, col);

    return 0;
}