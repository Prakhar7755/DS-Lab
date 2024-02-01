// COUNT THE NUM OF TRIPLETS WITH ADDS UP TO THE TARGET 
#include <stdio.h>
int numOfTriplet(int arr[], int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = numOfTriplet(arr, size, 12);
    printf("%d", ans);
}
