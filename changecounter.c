#include <stdio.h>

int main(void){
   
   // Variables to count the different coins
   int numQuarters = 0;
   int numDimes = 0;
   int numNickels = 0;
   int numPennies = 0;
   int total = 0;
   
   // Ask user to specify how many quarters, save to numQuarters variable
   printf("Enter the number of quarters:\n");
   scanf("%d", &numQuarters);
   
   // Ask user to specify how many dimes, save to numDimes variable
   printf("Enter the number of dimes:\n");
   scanf("%d", &numDimes);
   
   // Ask user to specify how many nickels, save to numNickels variable
   printf("Enter the number of nickels:\n");
   scanf("%d", &numNickels);
   
   // Ask user to specify how many pennies, save to numPennies variable
   printf("Enter the number of pennies:\n");
   scanf("%d", &numPennies);
   
   // Calculate the total value of the coins, save to variable total
   total = (numQuarters * 25) + (numDimes * 10) + (numNickels * 5) + numPennies;
   
   // Outputs the total value of all the coins added up
   printf("Total value: %d dollars and %d cents.", (total / 100), (total % 100));

}
