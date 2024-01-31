#include <stdio.h>

void main()
{

    int marks[5];

    // INPUTING THE MARKS OF STUDENT
    for (int i = 0; i < 5; i++)
    {
        printf("Enter THE MARKS OF STUDENT WITH ROLL NO. %d :\t", (i + 1));
        scanf("%d", &marks[i]);
    }

    // PRINTING THE ROLL NUM OF STUDENTS WITH MARKS (<35)
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] <= 35)
        {
            printf("the student who is roll number %d\n", i + 1);
        }
    }
}