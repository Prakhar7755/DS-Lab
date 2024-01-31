#include <stdio.h>

void main()
{
    int arr[] = {2, 4, 6, 8, 1};

    // arr[0] = 1000;
    int a = arr[0];
    printf("%d\n", a);
    printf("%f\n", a); // not good
    printf("%i\n", a);
    printf("%lf\n", a); // not good
    printf("%lu\n", a);
    printf("%p\n", &arr[0]); 
    printf("%p\n", &arr[1]); 
    printf("%p\n", &arr[2]); 
    printf("%p\n", &arr[4]); 

}
