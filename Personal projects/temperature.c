#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     
    char choice[50]= "";
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Convesrion Program\n");
    printf("A. Celsius to Fahrenheit\n");
    printf("B. Fahrenheit to Celsius\n");
    printf("Please type in the letter of what conversion you'd like to use: ");
    fgets(choice, sizeof(choice), stdin);

    choice[strlen(choice) - 1] = '\0';

    if(strcmp(choice, "A") == 0){ //Do this if you're comparing strings. (choice == 'A') wont work
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 1.8) + 32; // (celsius * 9 / 5) + 32 is a substitute

        printf("%.1f in Celsius is equal to %.1f in Fahrenheit", celsius, fahrenheit);
    }
    else if(strcmp(choice, "B") == 0){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) / 1.8; // (fahrenheit -32) * 5 / 9 is a substitute

        printf("%.1f in Fahrenheit is equal to %.1f in Celsius", fahrenheit, celsius);
    }
    else{
        printf("'%s' is not recognized, please type in A or B", choice);
        exit (0);
    }
}