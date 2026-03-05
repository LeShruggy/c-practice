#include <Stdio.h>

void happyBirthday(){ //void + variable name(){statement u wanna reuse}
    printf("\nHappy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to dear [name]!\n");
    printf("Happy Birthday to you!\n");
    printf("You are [age] years old!\n");
}//This is a function

int main(){

    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent on a function so that it can use them

    happyBirthday(); //in order to call the statement always make sure to add(); 
    happyBirthday();
    happyBirthday(); //now instead of copy and pasting the happy birthday song 3 times
    //we can copy and paste a shorter function making our code shorter and more efficient.
}