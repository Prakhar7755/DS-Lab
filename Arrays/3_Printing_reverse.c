#include <stdio.h>

void main()
{
    int arr[6-1];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element num %d :\t", (i + 1));
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
        printf("%i\t", arr[i]);
}