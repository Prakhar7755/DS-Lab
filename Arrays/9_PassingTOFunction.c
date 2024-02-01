// Array is passed by reference in a function and will get changed by passing from a function WITHOUT USING POINTERS

#include <stdio.h>
void func(int x[])
{
    // swap
    // x[0] = 109;
    // x[1] = 453;
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;
}

void main()
{
    int arr[] = {10, 25};
    printf("Original array : %d\t%d\n", arr[0], arr[1]);        // 1
    func(arr);                                                  // pass only with name without brackets
    printf("Swapped element array : %d\t%d\n", arr[0], arr[1]); // 1
}
