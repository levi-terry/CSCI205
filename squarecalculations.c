#include <stdio.h>

int main(void){
   int length = 0;
   
   printf("Enter the length of a square's side:\n");
   scanf("%d", &length);
   printf("\nPerimeter: %d", (length * 4));
   printf("\nArea: %d", (length * length));
   
   return 0;
}
