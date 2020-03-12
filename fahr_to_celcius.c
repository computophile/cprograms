#include<stdio.h>
int main(){
	// to print the Celcius equivalent of Fahrenheit
	// using the formula C = (5/9)(F-32)
	// where c = temperature in celci975 us and F is fahrenhiet
	// declaring the variables
	double upper, lower, step;
	double fahr;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;
	printf("%s\t%s\n", "Fahrenheit", "Celcius");
	for (fahr = lower; fahr <= upper; fahr+= 20){
		double celsius = ((5.0*(fahr-32.0))/9.0);
;
		printf("%3.0f\t\t %6.1f\n", fahr, celsius);
	}
	return 0;
}