#include <stdio.h>
#include <strings.h>

void main()
{
    char str[10];

    puts("Enter a string");
    char ans[] = gets(str);
    int size = sizeof(ans) / sizeof(ans[0]);
    puts("the reverse is : "); // puts automatically puts \n at the end
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        char temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
    }

    puts(ans);
}