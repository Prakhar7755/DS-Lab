#include <stdio.h>

typedef char String[10];


void main()
{
    String arr = "astjfsd";

    printf("%c\n",arr[4]);
    printf("%c\n",arr[0]);
    printf("%c\n",arr[2]);
    printf("%c\n",arr[3]);
    printf("%p\n",arr[3]);
    printf("%c\n",arr[9]); // NULL
}