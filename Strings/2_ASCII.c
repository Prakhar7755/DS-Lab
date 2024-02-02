/*
A = 65; Z = 90
a = 97; z= 122;
0 -> 48; 9 -> 57
*/
#include <stdio.h>

void main()
{
    char x = 1;
    for (int i = 0; i < 257; i++)
    {
        printf("%c\n", x + i);
    }

    
}