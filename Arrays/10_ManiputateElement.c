// odd index element *2 and even index element +10

#include <stdio.h>
void printArray(int arr[], int n);

void manipulate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else
        {
            arr[i] = arr[i] * 2;
        }
    }
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    manipulate(arr, size);

    printArray(arr, size);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}