#include <stdio.h>

void main()
{
    char arr[] = "Gamushara is here alfdlksj dsfak lorem";
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c\t", arr[i]);
        i++;
    }
}