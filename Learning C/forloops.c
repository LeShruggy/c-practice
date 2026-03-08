#include <Stdio.h>
#include <windows.h> //adds a sleep funciton

int main(){

    // for loop = repeat some code a limited # of times 
    //            Initialization; Condition; Update

    //in order to create a for loop we must follow Initialization; Condition; Update. 
    //Theyre all separated by a semicolon ;

    /*Initialization - we create some sort of counter. i = 0 works. anything works, but u tend to see i.
    Condition - When do we want to stop?
    Update
    */
    
    //i++ means during each iteration we update i by 1
    //1 2 3 4 5 6 7 8 9 10
    //i+=2 means we incerement by 2 now instead of 1 so from
    //1 3 5 7 9  
    for (int i = 1; i <= 10; i+=5){
        printf("%d\n", i);

    }
    //i== means during each iteration we update i by -1
    //10 9 8 7 65 4 3 2 1 
    //i-=2 same thing with addition
    //10 8 6 4 2 0

    for (int i = 10; i >= 0; i-=1){
        Sleep(1000); //Uppercase S in Sleep then amount of time in miliseconds
        //program will stop a second before dsiplaying the next message
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");
}