#include <stdio.h>
#include <string.h>
#include <ctype.h>

int GetNumOfNonWSCharacters(const char userStr[]){
   int count = 0;
   
   for(int i = 0; i < strlen(userStr); i++){
      char temp = userStr[i];
      if(isspace(temp)){
         continue;
      }
      else{
         count++;
      }
   }
   return count;
         
}

int GetNumOfWords(const char userStr[]){
   int count = 0;
   int reading = 0;
   
   for(int i = 0; i < strlen(userStr); i++){
      if(reading == 1){
         if(isblank(userStr[i]) || iscntrl(userStr[i+1])){
            reading = 0;
            count++;
         }
      }
      else if(reading == 0){
         if(isalnum(userStr[i])){
            reading = 1;
         }
      }
   }
   return count;
}

void FixCapitalization(char userStr[]){
   int reading = 0;
   
   for(int i = 0; i < strlen(userStr); i++){
      if(reading == 1){
         if(userStr[i] == '.' || userStr[i] == '!' || iscntrl(userStr[i+1])){
            reading = 0;
         }
      }
      else if(reading == 0){
         if(isalpha(userStr[i])){
            if(islower(userStr[i])){
               char temp = toupper(userStr[i]);
               userStr[i] = temp;
            }
            reading = 1;
         }
      }
   }
}

void ReplaceExclamation(char userStr[]){
   for(int i = 0; i < strlen(userStr); i++){
      if(userStr[i] == '!'){
         userStr[i] = '.';
      }
   }
}

void ShortenSpace(char userStr[]){
   for(int i = 0; i < strlen(userStr); i++){
      if(userStr[i] == ' '){
         while(userStr[i+1] == ' '){
            if(userStr[i+1] == ' '){
               for(int j = i + 1; j < strlen(userStr); j++){
                  userStr[j] = userStr[j+1];
               }
            }
         }
      }
   }
}

void PrintMenu(char* userStr){
   char userChoice;
   while (userChoice != 'q') {
      printf("MENU\n");
      printf("c - Number of non-whitespace characters\n");
      printf("w - Number of words\n");
      printf("f - Fix capitalization\n");
      printf("r - Replace all !'s\n");
      printf("s - Shorten spaces\n");
      printf("q - Quit\n");
      printf("\nChoose an option:\n");
      scanf(" %c", &userChoice);
      
      switch(userChoice){
         case 'c':
            printf("Number of non-whitespace characters: %d\n\n", GetNumOfNonWSCharacters(userStr));
            break;
            
         case 'w':
            printf("Number of words: %d\n\n", GetNumOfWords(userStr));
            break;
            
         case 'f':
            FixCapitalization(userStr);
            printf("Edited text: %s\n", userStr);
            break;
            
         case 'r':
            ReplaceExclamation(userStr);
            printf("Edited text: %s\n", userStr);
            break;
            
         case 's':
            ShortenSpace(userStr);
            printf("Edited text: %s\n", userStr);
            break;
            
         default:
            break;
      }
   }
}

int main() {
   char userString[256];

   printf("Enter a sample text:\n");
   fgets(userString, 256, stdin);
   
   printf("\n");
   
   printf("You entered: %s\n", userString);
   PrintMenu(userString);
   
   return 0;
}
