#include <stdio.h>
#include <string.h>

int main(){

    //when creating a project, a good first step is to declare all the variables you'll need

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = 'P';
    float total = 0.0f;

    //after getting your variables done you can create all the prompts next

    printf("What item would you like to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each? ");
    scanf("%f", &price); //dont forget & when youre addressing a variable!

    printf("How many would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;
    
    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("%c%.2f",currency, total);

    //When  youre using 2 fspecs on a line make sure u specify it by order as well.
    //if currency were to preceed total in this scenario the output wouldnt work. thats because %f comes after %c




    return 0;

}