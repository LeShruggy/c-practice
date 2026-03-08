#include <stdio.h>

int main(){

    //nested loop - loop that is inside of another loop. can include any loop, for, do , while...

    for(int i = 1; i < 4; i++){ //OUTER LOOP - Cycles three times
        for(int j = 1; j < 10; j++){ //USE J instead of i. Cant have two i's in the same loop
            printf("%d ", j);
    } //INNER LOOP, PRINTS THE NUMBERS 1 > 9
    printf("\n");
    } 

    //MULTIPLICATION TABLE

    for(int i = 1; i <= 10; i++){ //Cycles inner loop 10 times. 1 2 3 4 5 6 7 8 9 10
        for(int j = 1; j <= 10; j++){ //repeats the printf statement 10 times. Displaying 1-10
            printf("%3d ", i * j);
        } //printf has a width of three before each number.
        printf("\n"); //new line after each cycle
    } 


    printf("\nPro tip. i= rows, j = columns");
    //This becomes a multiplication table. it may seem like you're printing the same thing BUT,
    //i is row, j is column. numbers are different. so it creates the table. as it multiplies
    //with each other.
}