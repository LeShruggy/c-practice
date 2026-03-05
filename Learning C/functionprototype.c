#include <Stdio.h>

//FUNCTION PROTOTYPE - A statement you list before the main function(int main)
/*void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
} 
    ONE issue with functions is that with c programs we read stuff from TOP TO BOTTOM. 
    AND we cant USE a function UNTIL ITS DEFINED.

    Since our main function drives everything itd be nice if it were on top. and the
    other functions on the bottom. So how do we do that while reading a function
    below the main function? for it to be used? FUNCTION PROTOTYPE

*/

void hello(char name[], int age); //FUNCTION PROTOTYPE
//literally just copy the return type,name parameters and add a semicolon. above the main function
bool ageCheck(int age);

int main(){

    /* function prototype = Provide the compiler w information about a function's:
    name, return type, and parameters before its actual definition. Enables type
    checking and allows functions to be used before they're defined.
    Improves readability, organization, and helps prevent errors.*/

    hello("Spongebob\n", 30); //notice how clean it is! everything came from the other function
    //plus u can copy and paste this and not take up that many lines wow!

    if(ageCheck(30)){
        printf("You are old enough to work at the Krusty Krab");
    }
    else{
        printf("You must be 16+ to work at the Krusty Krab");
    }
}

void hello(char name[], int age){ 
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}
    //if we were to just paste this below int main, int main wouldnt read since c 
    //reads from TOP to BOTTOM. make sure to paste the return type.. blah blah.. before the int main.

bool ageCheck(int age){
    if(age >= 1){
        return true;
    }
    else{
        return false; 
    }
}