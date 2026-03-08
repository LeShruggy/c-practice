#include <Stdio.h>
#include <String.h>
#include <Stdbool.h>

int main(){

    // while loop = Continue some code  WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    /*while(1 == 1){
        printf("HELP IM STUCK IN A LOOP");
    }
        
    THIS IS A BAD LOOP. Your condition is as long as 1 is 1 it will keep on printing "HELP IM STUCK IN A LOOP"
    therefore do not do this lol. This is called an INFINITE LOOP.
    */

    int number = 0;
    int number1 = 1;

    while(number <= 0){//Condition must be true to begin with before entering it
        printf("Enter a number that is greater than  0: ");
        scanf("%d", &number);
    }//This program will keep on r unning until the user enters a number greater than one

    //while loops are great becuz in case the user says smth invalid u can reprompt them again

    do{
        printf("Enter a number that is greater than  0: ");
        scanf("%d", &number1);
    }while(number <= 0);

    //do while loops -> do this code once and then check the condition at the END.

    //difference is regular while loops check the condition at the beginning.

    char name[50] = "";
    
    getchar();
    printf("Enter you name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) -1] = '\0';

    while(strlen(name) == 0){ //in order to determine size of name we must use strlen
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name) -1] = '\0';
    }//this loop makes it so that if a user doesnt type in anything itll keep asking for their name

    printf("Hello %s!", name);

    bool isRunning = 1;
    char response = '\0';

    while(isRunning){ //this will keep on running unril isRunning is set to false
        printf(" You are playing a game\n");
        printf("Would you like to coninue (Y/N): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){ //!= means does not equal to!
            printf("Bye");
            isRunning =  0;
        }
    }

    /*do{
        printf(" You are playing a game\n");
        printf("Would you like to coninue (Y/N): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){ //!= means does not equal to!
            printf("Bye");
            isRunning =  0;
        }
    }while(isRunning;   
    
    This does the same thing.

    */

}