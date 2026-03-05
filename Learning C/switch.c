#include <stdio.h>
#include <stdlib.h>

int main(){

    //switch - Alternative to using many if-statements. More efficient when working with fixed integer values
    //examples if ure using a lot of else-if statements it can be inefficient so a switch is an alternative.

    int dayofWeek = 0;

    printf("Enter a day of the week (1 - 7): ");
    scanf("%d", &dayofWeek);

    switch(dayofWeek){//creating a switch is just the same with any if statements. good for examining chars and ints.
        case 1: //if dayofWeek is 1 then print this
             printf("It is Monday\n");
             break; //breaks out of the switch, if this is missing then it will keep on executing the next line of codes
        case 2:
             printf("It is Tuesday\n");
             break;
        case 3:
             printf("It is Wednesday\n");
             break;
        case 4:
             printf("It is Thursday\n");
             break;
        case 5:
             printf("It is Friday\n");
             break;
        case 6:
             printf("It is Saturday\n");
             break;
        case 7:
             printf("It is Sunday\n");
             break;
        default: //else statement
             printf("Please only enter a number from 1-7");
             exit (0);
    }


    char animal = '\0';

    printf("What Letter speaks to you the most (D, M, J, K, Y, H, G, A): ");
    scanf(" %c", &animal);

    switch(animal){
        case 'D':
             printf("You are a Dragonfly!");
             break;
        case 'M':
             printf("You are a Mongoose!");
             break;
        case 'J':
             printf("You are a Jaguar!");
             break;
        case 'K':
             printf("You are a Kangaroo!");
             break;
        case 'Y':
             printf("You are a Yak!");
             break;
        case 'H':
             printf("You are a Hummingbird!");
             break;
        case 'G':
             printf("You are a Giraffe!");
             break;
        case 'A':
             printf("You are an Anthropod!");
             break;
        default:
             printf("Please only type: D, M, J, K, Y, H, G, A");
    }



}