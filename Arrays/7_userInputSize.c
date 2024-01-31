#include <stdio.h>
void main()
{
    int size = 0;
    printf("Enter the size of array");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element num %d :\t", (i + 1));
        scanf("%d", &arr[i]);
    }
}