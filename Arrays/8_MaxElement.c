// similar logic of Min Element


#include <stdio.h>
#include <limits.h>

void main()
{

    int arr[] = {2, 4, 99, 8, 1};

    // int max = arr[0]; // storing the first element inorder to make it perfect for negative elements

    int max = INT_MIN;  // -2147483648


    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d", max);
}