#include <stdio.h>

// INPUT THE MATRIX
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
    printf("the matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d\t", M[i][j]);
        printf("\n");
    }
}

// SPARSE MATRIX
void sparse(int A[5][5], int row, int col)
{
    int S[5][5], i, j, k = 0, n = 0;
    
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            if (A[i][j] != 0)
                n++;

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            if (A[i][j] != 0)
            {
                S[k][0] = i;
                S[k][1] = j;
                S[k][2] = A[i][j];
                k++;
            }

    // display(A, row, col);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", S[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int A[5][5], r1, c1;
    printf("enter the size of the matrix\n");
    scanf("%d%d", &r1, &c1);

    input(A, r1, c1);
    display(A, r1, c1);
    sparse(A, r1, c1);
}