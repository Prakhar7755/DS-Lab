#include <stdio.h>

void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter element num %d :\t", (i + 1));
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
        printf("%i\t", arr[i]);


    
}