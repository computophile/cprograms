#include <stdio.h>

// Write a program to copy its input to its output, replacing each tab by \t , each backspace by \b , and each
// backslash by \\ . This makes tabs and backspaces visible in an unambiguous way.

// to count the number of blanks, tabs and newlines
#include <stdio.h>

int main()
{
    int c, count_blank, count_tabs, count_newline;

    printf("%s", "Enter ~ to exit the program\n");
    while ((c = getchar()) != EOF)
    {
        if (c == '~')
            break;
        // c is counted character by character
        else if (c == ' ')
            printf(" \\%s", "b ");

        else if (c == '\t')
            printf(" \\%s", "t ");

        else if (c == '\\')
            printf("%s", " \\");

        else
            putchar(c);
    }
    return 0;
}