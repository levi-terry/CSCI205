#include <stdio.h>

int main(void){
   // Variables
   double temperatureFahrenheit = 0.0;
   double temperatureCelsius = 0.0;
   
   // Ask user to enter temperature, save to variable temperature
   printf("Enter a Fahrenheit temperature:\n");
   scanf("%lf", &temperatureFahrenheit);
   
   // Calculate Celsius
   temperatureCelsius = (temperatureFahrenheit - 32) * (5.0/9.0);
   
   // Output Celsius equivalent
   printf("Celsius Equivalent: %lf\n", temperatureCelsius);
   
}
