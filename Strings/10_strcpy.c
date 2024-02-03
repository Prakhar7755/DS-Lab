#include <stdio.h>
#include <string.h>

void main()
{
    char *s1 = "Prakhar";
    char s2[10];
    strcpy(s2, s1);
    puts(s2);

    s2[0] = 'G';
    puts(s2);
}