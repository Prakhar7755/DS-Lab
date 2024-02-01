/*
STEPS :
1) K = K % N;
2) reverse whole array 0 to (n-1)
3) reverse array 0 to (k-1)
4) reverse array k to (n-1)
*/

#include <stdio.h>
void printArray(int arr[], int n);

void reversePartOfArray(int arr[], int start, int end)
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // num of rotation

    k = k % n;
    reversePartOfArray(arr, 0, n - 1);
    reversePartOfArray(arr, 0, k - 1);
    reversePartOfArray(arr, k, n - 1);

    printArray(arr, n);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}