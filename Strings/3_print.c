#include <stdio.h>

typedef char String[10];

int main(void)
{

    //    \0 is a null character with ASCII value 0
    //    \0 acts like a checkmark/destination to stop our implementation

    char c[] = {'a', 'f', 'h', 'r', '\0'};
    int n = sizeof(c) / sizeof(c[0]);

    int t = 0;
    char ch = (char)t;

    printf("%c\n", ch); // NULL or \0

    //    PRINT THE STRING WITHOUT AN SIZE GIVEN
    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c\t", c[i]); // a	f	h	r
        i++;
    }

    char hello[] = "Hello World!";
    printf("\n%s\n", hello);       // Hello World!

    return 0;
}