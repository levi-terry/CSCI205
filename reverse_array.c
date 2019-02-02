#include <stdio.h>

int main() {

   int numArray[30];
   int userSize;
   int temp;
   
   printf("Enter the number of integers (up to 30) in your array:\n");
   scanf("%d", &userSize);
   
   printf("Enter the numbers:\n");
   for(int i = 0; i < userSize; i++){
      scanf(" %d", &numArray[i]);
   }
   
   for(int i = 0; i < userSize; i++){
      for(int j = i + 1; j < userSize; j++){
         if(numArray[i] < numArray[j]){
            temp = numArray[i];
            numArray[i] = numArray[j];
            numArray[j] = temp;
         }
      }
   }
   
   printf("\n");
   printf("The numbers arranged in descending order are given below:\n");
   for(int i = 0; i < userSize; i++){
      printf("%d\n", numArray[i]);
   }

   return 0;
}
