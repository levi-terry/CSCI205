#include <stdio.h>
#include <string.h>

#include "Stack.h"
#include "Item.h"

int main()
{
    stack s;
    char token[20];

    initialize(&s);

    FILE* inFile = NULL; // File pointer

    inFile = fopen("myfile.txt", "r");

    if (inFile == NULL) {
       printf("Could not open file myfile.txt.\n");
       return -1; // -1 indicates error
    }
    
    fscanf(inFile,"%s",token);
    while (!feof(inFile)) {       
       if (strcmp(token,"-") != 0) {
         push(&s, token);
       } 
       else {
         if (!is_empty(&s)) {
           pop(&s, token);
         } else {
          printf("Nothing on the stack to pop\n");
         }
       }
       fscanf(inFile,"%s",token);
    }
    if (!is_empty(&s)){
      peek(&s, token);
      printf("Top of stack: %s\n",token);
    }
    printf("Size of stack: %d\n\n",get_length(&s));
    display(&s);

    return 0;
}
