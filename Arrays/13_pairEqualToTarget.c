
#include <stdio.h>
int numOfPair(int arr[], int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }
    return count;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = numOfPair(arr, size, 7);
    printf("%d", ans);
}
