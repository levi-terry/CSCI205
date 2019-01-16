#include <stdio.h>

int main(void){
   // Variables
   float temperatureFahrenheit = 0.0;
   float temperatureCelsius = 0.0;
   
   // Ask user to enter temperature, save to variable temperature
   printf("Enter a Fahrenheit temperature:\n");
   scanf("%f", &temperatureFahrenheit);
   
   // Calculate Celsius
   temperatureCelsius = (temperatureFahrenheit - 32.0) * (5.0/9.0);
   
   // Output Celsius equivalent
   printf("Celsius Equivalent: %f\n", temperatureCelsius);
   
}
