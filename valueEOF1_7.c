#include<stdio.h>
main(){
    printf("%s", "Enter any Character: ");
    int c = (getchar() != EOF);
    printf("%s%d", "The value of EOF is: " , c);
}