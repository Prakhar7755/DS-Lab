#include <stdio.h>
#include <string.h>

// A function to reverse a string using a loop
void reverse(char *str)
{
    int len = strlen(str); // Get the length of the string
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = str[i]; // Swap the characters at i and j
        str[i] = str[j];
        str[j] = temp;
    }
}

// A function to check if a string is a palindrome
int is_palindrome(char *str)
{
    char copy[100]; // Make a copy of the original string
    strcpy(copy, str);
    reverse(copy);                 // Reverse the copy
    return strcmp(str, copy) == 0; // Compare the original and the reversed strings
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The reversed string is: %s\n", str);
    reverse(str);           // Reverse the string
    if (is_palindrome(str)) // Check if it is a palindrome
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
    return 0;
}
