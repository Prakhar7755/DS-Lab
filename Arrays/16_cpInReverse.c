#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int rra[size];


    for (int i = 1; i <= size; i++)
    {
        rra[i-1] = arr[size - i];
    }

    printArray(rra, size); //8	7	6	5	4	3	2	1
}