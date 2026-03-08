#include <Stdio.h>

int main(){

    // break - Break out of a loop<Stop>
    // continue  = Skip current cycle of a loop (SKIP)

    for(int i =1; i <= 10;  i++){

        if(i==4){ //if statement and a parameter.
            break; //Stops everything
        }
        printf("%d\n", i);
    }

    for(int i = 1; i <= 10;  i++){

        if(i==4){ //to add a break add an if statement and a parameter.
            continue; //we're skipping 4
        printf("%d\n", i);
        {
    }

}