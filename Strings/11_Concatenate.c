#include <stdio.h>
#include <string.h>

void main()
{
    char s1[20] = "Prakhar"; // pointers make it read only
    char s2[10] = "The Great";

    strcat(s1, s2);
    puts(s1);
}