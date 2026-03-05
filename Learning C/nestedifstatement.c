#include <Stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true; //10% discount if we a student
    bool isSenior = true; //20% discount

    //student = 9
    //senior = 8
    //student + senior = 7
    
    /*if we were to just add another if statement on top of the previous if statement and student and senior were to be true it would take the percentage
    out of 9(subtracted value from isStudent) rather than 10(the original value from the variable). To avoid that we use nested if statements*/

    if(isStudent){
        if(isSenior){ //this is a nested if statment, tells us if student and senior is true then apply this
            printf("You get a student discount of 10percent\n");
            printf("You get a Senior discount of 20percent\n");
            price *= 0.7;
        }
        else{ //if senior is false then only apply to isStudent
            printf("You get a student discount of 10percent\n");
            price *= 0.9;
        }
    }
    else{ //this is outside isStudent. An else statement only if you are a Senior. Make sure to still make it a nested if statement.
        if(isSenior){
            printf("You get a Senior discount of 20percent\n");
            price *= 0.8;

        }
    }

    printf("The price of a ticket is P%.2f", price); //if you student and senior is false this prints out directly
}
