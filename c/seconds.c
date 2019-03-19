#include <stdio.h>

int main(void){
   // Variables
   int seconds = 0;
   int hours = 0;
   int minutes = 0;
   //int total = 0;
   
   // Ask user for number of seconds, save to seconds variable
   printf("Enter the number of seconds:");
   scanf("%d", &seconds);
   
   // Assign seconds to total to decrement correctly
   //total = seconds;
   
   // Calculate the hours/minutes/seconds from the given seconds
   // Hours
   hours = seconds / (60 * 60);
   seconds = seconds - (hours * 60 * 60);
   
   // Minutes
   minutes = seconds / 60;
   seconds = seconds - (minutes * 60);
   
   // Output Hours/Minutes/Seconds to screen
   printf("\nHours: %d, ", hours);
   printf("Minutes: %d, ", minutes);
   printf("Seconds: %d", seconds);
   
}
