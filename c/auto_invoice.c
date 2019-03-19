#include <stdio.h>
#include <string.h>

int main(void) {

    char userChoice1[20];
    char userChoice2[20];
    int price1;
    int price2;

    printf("Davy's auto shop services\n");
    printf("Oil change -- $35\n");
    printf("Tire rotation -- $19\n");
    printf("Car wash -- $7\n");
    printf("Car wax -- $12\n");

    printf("\nSelect first service:\n");
    fgets(userChoice1, 20, stdin);
    printf("Select second service:\n");
    fgets(userChoice2, 20, stdin);

    int len = strlen(userChoice1);
    if(userChoice1[len-1]=='\n'){
        userChoice1[len-1]='\0';
    }

    len = strlen(userChoice2);
    if(userChoice2[len-1]=='\n'){
        userChoice2[len-1]='\0';
    }

    if(strcmp(userChoice1, "Oil change") == 0){
        price1 = 35;
    }
    else if(strcmp(userChoice1, "Tire rotation") == 0){
        price1 = 19;
    }
    else if(strcmp(userChoice1, "Car wash") == 0){
        price1 = 7;
    }
    else if(strcmp(userChoice1, "Car wax") == 0){
        price1 = 12;
    }
    else if(strcmp(userChoice1, "-") == 0){
        strcpy(userChoice1, "No service");
        price1 = 0;
    }
    else{
        strcpy(userChoice1, "No service");
        price1 = 0;
    }

    if(strcmp(userChoice2, "Oil change") == 0){
        price2 = 35;
    }
    else if(strcmp(userChoice2, "Tire rotation") == 0){
        price2 = 19;
    }
    else if(strcmp(userChoice2, "Car wash") == 0){
        price2 = 7;
    }
    else if(strcmp(userChoice2, "Car wax") == 0){
        price2 = 12;
    }
    else if(strcmp(userChoice2, "-") == 0){
        strcpy(userChoice2, "No service");
        price2 = 0;
    }
    else{
        strcpy(userChoice2, "No service");
        price2 = 0;
    }

    printf("\nDavy's auto shop invoice\n\n");
    printf("Service 1: %s", userChoice1);
    if(price1 != 0){
        printf(", $%d\n", price1);
        printf("Service 2: %s", userChoice2);
        if(price2 != 0){
            printf(", $%d\n", price2);
        }
    }
    else{
        printf("Service 2: %s", userChoice2);
        if(price2 != 0){
            printf(", $%d\n", price2);
        }
    }
    printf("\nTotal: $%d\n", (price1 + price2));

    return 0;
}