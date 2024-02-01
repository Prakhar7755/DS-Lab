// STORE 10 AT EVERY INDEX OF THE 5X5 MATRIX
#include <stdio.h>
void printMatrix(int arr[][5], int m, int n)
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

void main(){
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }

    printMatrix(arr,5,5);    
    

}