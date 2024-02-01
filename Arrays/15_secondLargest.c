#include <stdio.h>
#include <limits.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int smax = INT_MIN;

    // finding max
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    // finding second max
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }

    printf("the second max is %d", smax);
}