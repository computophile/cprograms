#include <stdio.h>
// character counting program
main(){
    // long nc;
    // nc = 0;

    // while (getchar() != EOF)
    // {
         
    //     ++nc;//pre increment to increase the nuumber of character count by 1 at a time
    //     printf("%ld\n", nc-1);
    // }
    
    // another version using the for loop
    double nc;

    for (nc = 0.0; getchar() != EOF; ++nc)
    ; // the isolated semicolon, called a null statement
    // the above is an empty loop as it doesn't have a body
    printf("%.0f\n", nc);
    //printf uses %f for both float and double ; %.0f suppresses the printing of the decimal point and the fraction part, which is
    // zero.
}

