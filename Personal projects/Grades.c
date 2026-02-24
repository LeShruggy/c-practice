#include <stdio.h>
#include <string.h>
//Hey seb in the future. Ts ur 1st proj made on 2/23/26

int main(){
    
    char name[30] = "";
    float math = 0.0f;
    float science = 0.0f;
    float english = 0.0f;
    float average = 0.0f;

    printf("Please input your name to get started: ");
    fgets(name, sizeof(name), stdin);

    //removing fgets \n
    name[strcspn(name, "\n")] = '\0';

    printf("Hello! %s today we will be quantifying the average of your 3 majors.\n", name);

    printf("What is your grade for the Subject Math: ");
    scanf("%f", &math);

    printf("What is your grade for the Subject Science: ");
    scanf("%f", &science);

    printf("What is your grade for the Subject English: ");
    scanf(" %f", &english);

    average = (math + science + english) / 3;

    printf("Your average is %.2f", average);

    /* Mistakes and new learnings in this project:
    
    forgot '&' is required for user input lol
    new line problems
    used getchar but that only works for removing a new line of a string not fgets

    learned about this: name[strcspn(name, "\n")] = '\0'; which removes the new line for fgets
    learned that arithmetic in c follows pemdas so parenthesis can be used to do complex maths
    rather than creating an entirely new variable for a differetn equation. Will save up a lot of time.
    
    */

    return 0;
}