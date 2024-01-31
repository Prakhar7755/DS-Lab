#include <stdio.h>

void main()
{

    int arr[6 - 1] = {1, 2, 3, 4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans += arr[i]; 
    }
    printf("\n%d\n",ans);
}