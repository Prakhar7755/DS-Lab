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

// FUNCTION TO MULTIPLE THE MATRICES
void multiply(int A[5][5], int B[5][5], int r1, int c1, int r2, int c2)
{
    int C[5][5], i, j, k;
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    display(C, r1, c2);
}


int main(void)
{
    int A[5][5], B[5][5], r1, c1, r2, c2;
    printf("\nenter the no. of rows and column you want In first matrix (<5):\n");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter first matrix\n ");
    input(A, r1, c1);
    display(A, r1, c1);

    printf("\nenter the no. of rows and column you want In second matrix (<5):\n");
    scanf("%d%d", &r2, &c2);

    printf("\nEnter Second matrix\n ");
    input(B, r2, c2);
    display(B, r2, c2);

    printf("\nThere product is is :\n");
    multiply(A, B, r1, c1, r2, c2);

    return 0;
}