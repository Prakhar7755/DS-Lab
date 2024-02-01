/* 
    steps 
    1) transpose the matrix,
    2) reverse elements of each row
 */
#include <stdio.h>
#define N 4

// Function to transpose the matrix
void transpose(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // Swap mat[i][j] and mat[j][i]
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

// Function to reverse each row of the matrix
void reverseRows(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            // Swap mat[i][j] and mat[i][n-1-j]
            int temp = mat[i][j];
            mat[i][j] = mat[i][N - 1 - j];
            mat[i][N - 1 - j] = temp;
        }
    }
}

// Function to rotate the matrix by 90 degree clockwise
void rotate90Clockwise(int mat[N][N])
{
    // Transpose the matrix
    transpose(mat);

    // Reverse each row
    reverseRows(mat);
}

// Function to print the matrix
void printMatrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ", mat[i][j]);

        printf("\n");
    }
}

// Driver code
int main()
{
    int mat[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    // Rotate the matrix by 90 degree clockwise
    rotate90Clockwise(mat);

    // Print the rotated matrix
    printMatrix(mat);

    return 0;
}
