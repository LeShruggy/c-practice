#include <stdio.h>

int main(){

    //logical operators = used to combine BOOLEAN expressions

    // && - AND -> BOTH CONDITIONS MUST BE TRUE BEFORE EXECUTING THIS CODE
    // || - OR -> AT LEAST ONE OF THESE CONDITIONS NEEDS TO BE TRUE BEFORE EXECUTING THIS CODE
    // ! NOT -> REVERSES any BOOLEAN EXPRESSION.

    int temp = 0;
    char choice = '\0';
    bool choice2 = 1;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if(temp > 0 && temp <30){//BOTH CONDITIONS MUST BE TRUE BEFORE EXECUTING THIS CODE
        printf("The temperature is good\n");
    }//with this && operator we're telling the program that the temperature is good only within 0-30

    /*else if(temp < 30){ 
        printf("The temperature is good");

        With the if statement above (temp < 0) our temperature is technically ALWAYS above than
        0 which SKIPS over everything. Rendering our < 30 statement useless because any number
        above that is greater than 0 anyways.

         what if there was a way our variable/temp falls within a certain RANGE? with && }*/

    else{
        printf("The temperature is bad\n");
    }
    
    printf("Would you like to proceed (Y): ");
    scanf(" %c", &choice);

    if(choice == 'Y' || choice == 'y' || choice == 'Z'){ //You need to type in Y OR y OR Z to proceed
        printf("You may proceed\n");
    }//WITH the or || logical operator at least one of these statements needs to be true to execute the code.

    /* if(choice == 'Y'){
         printf("This input only accepts a capitalized "Y" which can be annoying.);
    }*/

    else{
        printf("You are not proceeding\n");
    }
    
    
    if(!choice2){ //the logical operator reverse so this is esentially if choice2 = false
        printf("It is Sunny Outside");
    }
    //if bool choice2 = false; this would print because of the '!' operator 

    else if(choice2){ //this would print if bool were to be true. bool choice2 = true; 
        printf("It is NOT Sunny Outside");
    }


}