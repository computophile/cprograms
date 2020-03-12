#include<stdio.h>

// constants
#define UPPER 300.0
#define LOWER 0.0
#define STEP 20.0

int main(){
    double fahr, celsius;
    double upper, lower, step;

    // upper = 300.0;
    // lower = 0.0;
    // step = 20.0;

    printf("%s \t %s\n", "Celcius " ,"Fahrenheit");
    for(celsius = LOWER; celsius <= UPPER; celsius += STEP){
        fahr = (celsius*(9.0/5.0)) + 32;
        printf("%6.0f \t\t %6.2f\n" , celsius, fahr);
    }
    return 0;
}