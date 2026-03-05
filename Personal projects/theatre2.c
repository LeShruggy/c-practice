#include <stdio.h>
#include <stdlib.h>

int isMinor(int age){ //IF is not needed if there is no else. Straight to return.
    return (age >= 0 && age <= 17);
}

int isAdult(int age){
    return (age >= 18 && age <= 59);
}

int isSenior(int age){
    return (age >= 60 && age <= 125);
}

int isVampire(int age){
    return (age <= -1 || age >= 126);
}


int main(){

    int age = 0;
   
    printf("Enter you age: ");
    scanf("%d", &age);

    if(isMinor(age)){
        printf("You are a Minor.");
    }
    else if(isAdult(age)){
        printf("You are an Adult.");
    }
    else if(isSenior(age)){
        printf("You are a Senior.");
    }
    else if(isVampire(age)){
        printf("You are a Vampire.");
    }
    else{
        printf("Vhat?");
        exit (0);
    }
}