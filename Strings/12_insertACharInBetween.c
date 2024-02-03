//      WRITE A FUNCTION TO INSERT A NEW CHAR IN A STRING AT A GIVEN POSITION
#include <stdio.h>
#include <string.h>

void insert(char str[], int n, char element, int position)
{
    for (int i = n; i >= position; i--)
    {
        str[i + 1] = str[i];
    }

    str[position] = element;
    puts(str);
}

void main()
{
    char str[] = "College";
    puts(str);
    int x = strlen(str);

    insert(str, x, 'k', 2);
}