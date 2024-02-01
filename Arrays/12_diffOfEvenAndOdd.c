// find the diff of all even idx with all odd idx
#include <stdio.h>
int evenOddDiff(int arr[], int n)
{
    int sumOfOdd = 0, sumOfEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumOfOdd += arr[i];
        }
        else
        {
            sumOfEven += arr[i];
        }
    }

    return (sumOfOdd - sumOfEven);
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nThe difference of odd and even idx num is %d\n", evenOddDiff(arr, size));
}
