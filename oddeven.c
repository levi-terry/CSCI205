#include <stdio.h>

int main() {

   int numArray[20];
   int userSize;
   int odd[20];
   int even[20];
   int odds = 0;
   int evens = 0;
   
   printf("Enter the size of an array that can hold up to 20 integers:\n");
   scanf("%d", &userSize);
   
   printf("Enter the elements (integers) of the array:\n");
   for(int i = 0; i < userSize; i++){
      scanf(" %d", &numArray[i]);
   }
   
   for(int i = 0; i < userSize; i++){
      if(numArray[i] % 2 != 0){
         odd[odds] = numArray[i];
         odds++;
      }
      else{
         even[evens] = numArray[i];
         evens++;
      }
   }
         
   printf("\n");
   printf("The elements of the odd array are:\n");
   for(int i = 0; i < odds; i++){
      printf("%d\n", odd[i]);
   }
   printf("The elements of the even array are:\n");
   for(int i = 0; i < evens; i++){
      printf("%d\n", even[i]);
   }

   return 0;
}
