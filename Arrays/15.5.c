#include <stdio.h>
#include <limits.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            smax = max; // storing the value of old max in smax
            max = arr[i]; // updating the max for the new value
        }
    }

    printf("the second max is %d", smax);
}