#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

int main()
{
    // if statement = with if statements do some code if it is true. Otherwise, don't do it. basic decision making.

    /*
    int age = 20

    if(age >= 21){
          printf("You are an adult.");
    } 
    
    IF the variable age were to be 20 which is below 21 then nothing will be printed out.
    */

    /*> greater than, >= greather than or equal to
    < less than, <= less than or equal to
    == comparison operator. checking if two things are equal
    = assigning operator
    age == 18, hey check if age is equals to 18
    age = 18, hey assign age with this value (18)
    make sure to always use "==" in if statements that needs comparing!
    */ 


    int age = 0;

    //to make an if statement simply if(){} with your prompt inside the parenthesis and your print inside curly.
    printf("How old are you: ");
    scanf("%d", &age);

    if(age == 67){
        printf("SIX SEVEENNNN\n");
    } //in other words only do this code if this condition is true
    else if(age >= 65){
        printf("You are a senior\n");
    }//if you want to check another condition use else if. Similar line to the if function.else if with a space alr.
    else if(age >= 18){
          printf("You are an adult.\n");
    }

    /*else if(age >= 65){
        printf("You are a senior");
    }This would desplay you are an adult instead of you are a senior because the line you are an adult
    came in first. So basically it got prioritized. To make this display instead, simply change the order. */

    else if(age < 0){
        printf("You haven't been born yet\n"); 
    }
    else if(age == 0){
        printf("You are a newborn\n");
    }//remember to use double == when comparing
    else{ 
        printf("You are a child\n");
    }//else clause tells you that if the first statement does not apply then do this instead

    //THE ORDER OF YOUR STATEMENTS MATTER!! 

    bool isStudent = 1; //if this 1/true it does if. If this false/0 it does else
    
    if(isStudent){//when examining boolean variables theres no need for a comparison "==" indicator.
        printf("You are a student\n");
    } //if this boolean is true/1 do this ^
    else{
        printf("You are not a student\n");
    } //else/false/0 do something else ^ 

    char name[50] = "";

    getchar();
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) -1] = '\0';

    if(strlen(name) == 0){//checking if name is empty. string length of name is directly equal to 0. strlen(vairable) == 0
        printf("You did not enter your name.");
    }
    else{
        printf("Hello %s, its nice to meet you!", name);
    }
    
    return 0;
}