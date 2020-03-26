// a program to copy its input to its output, replacing each string of one or more
// balnks by a single blank
#include<stdio.h>
#include<string.h>

int main(){
    int c;
    printf("%s\n","Enter ~ for exiting the program");
    while((c = getchar()) != EOF){
        // check if the character that is entered is a blank or not
        if (c == ' '){
            // print the first blank
            putchar(c);
            // ignore the rest of the blanks
            while((c = getchar()) == ' ')
            ;
        }
        if (c != ' ')
        {
            putchar(c);
        }
        // code snippet for exiting the program
        if (c == '~')
        {
            break;
        }
    }
    return 0;
}