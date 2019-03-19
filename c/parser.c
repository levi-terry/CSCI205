#include <stdio.h>
#include <string.h>

int main(void) {

   char inputString[50];
   char word1[50];
   char word2[50];
   char word3[50];
   
   while(strcmp(inputString, "q") != 0){
      printf("Enter input string:\n");
      fgets(inputString, 50, stdin);
      if(inputString[0] == 'q'){
         break;
      }
      if((strlen(inputString) > 0) && (inputString[strlen(inputString) - 1] == '\n'))
         inputString[strlen(inputString) - 1] = '\0';
      sscanf(inputString, "%s %s", word1, word2);
      if(word1[strlen(word1) - 1] != ',' && word2[0] != ','){
         printf("Error: No comma in string.\n");
      }
      else if(word1[strlen(word1) - 1] == ','){
         word1[strlen(word1) - 1] = '\0';
         printf("First word: %s\n", word1);
         printf("Second word: %s\n", word2);
      }
      else if(word2[0] == ','){
         sscanf(inputString, "%s %s %s", word1, word2, word3);
         printf("First word: %s\n", word1);
         printf("Second word: %s\n", word3);
      }
      else{
         printf("ERROR\n");
      }
      
   }

   return 0;
}
