#include <stdio.h>

int main(void) {

   double userInput[5];
   double total;
   
   for(int i = 0; i < 5; i++){
      printf("Enter weight %d:\n", (i+1));
      scanf("%lf", &userInput[i]);
   }
   
   double max = userInput[0];
   printf("You entered: ");
   for(int i = 0; i < 5; i++){
      printf("%lf ", userInput[i]);
      total += userInput[i];
      if(userInput[i] > max){
         max = userInput[i];
      }
   }
   
   printf("\n");
   printf("\n");
   printf("Total weight: %lf\n", total);
   printf("Average weight: %lf\n", (total / 5));
   printf("Max weight: %lf\n", max);

   return 0;
}
