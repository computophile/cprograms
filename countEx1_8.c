// to count the number of blanks, tabs and newlines
#include <stdio.h>

int main()
{
    int c, count_blank, count_tabs, count_newline;
    count_blank = 0;
    count_newline = 0;
    count_tabs = 0;

    while ((c = getchar()) != EOF)
    {   
        if (c == '~')
            break;
        // c is counted character by character
        if ( c == ' ')
        {
            count_blank += 1;
        }
        if (c == '\t')
        {
            count_tabs += 1;
        }
        if (c == '\n')
        {
            count_newline += 1;
        }
    }
    printf( "%s %i \n", "The number of blank lines in the paragraph" , count_blank);
    printf( "%s %d \n", "The number of tabs in the paragraph" , count_tabs);
    printf( "%s %d \n", "The number of new lines in the paragraph" , count_newline);

    return 0;
}