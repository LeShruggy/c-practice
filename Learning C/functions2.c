#include <Stdio.h>
#include <stdlib.h>
#include <string.h>

void happyBirthday(char name[], int monkey){ //<--- inside the parenthesis is where you list the parameters..
    
    printf("\nHappy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("You are %d years old!\n", monkey);
    // must be at full + amount + variable name

    /*You can also change the variable name of the parameters. See how int age is not actually int age here:
    It wont change as long as the argument has the variables listed correctly. */

}

int main(){

    char name[50] = "";
    int age = 0; 
    char choice = '\0';

    printf("Is it someone's Birthday today (Y/N): ");
    scanf("%c", &choice);
    
    if(choice == 'Y' || choice == 'y'){
        getchar();
        printf("Enter their name: ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name) -1] = '\0';
        printf("Enter their age: ");
        scanf(" %d", &age);
    }
    else if(choice == 'N' || choice == 'n'){
        printf("Ge tout");
        exit (0);
    }
    else{
        printf("ge tout");
        exit(0);
    }

    //Functions cant see other functions so void happyBirthday wont recognize what the variables age and name are.
    //In order for the variables to be seen we need to past them as ARGUMENTS to the next function

    happyBirthday(name, age); /*<---- happyBirthday();
    /with the vairables now inside you are sending valid arguments to happyBirthday function.
    Make sure to also list the parameters of what we are receiving at the function.*/

    //ARGUMENT  - Are what you send a function
    //PARAMETERS - ARE what a function is expecting to receive
}