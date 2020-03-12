#include<stdio.h>
main(){
    printf("%s\n", "Checking if the value of input char is 0 or 1");
    printf("%s", "Input any character: ");
    if ((getchar() != EOF) == 0 || (getchar() != EOF) ==1){
        printf("%s", "EOF is either 0 or 1");
    }  
}
