// there are multiple problem while using scanf for strings

#include <stdio.h>
#include <string.h>

void main()
{

    char str[20], gtr[20];
    // scanf("%[^\n]s", str); // don't use & here for a complete string
    // printf("you typed :%s \neven though the first word will only come");

    gets(gtr); // gets allows to take entire sentence with spaces as inputs
    puts(gtr);
}