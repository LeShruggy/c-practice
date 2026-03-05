#include <stdio.h>



int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

//FUNCTIONS CANNOT SEE INSIDE OF OTHER FUNCTIONS
//its like int subtract is ur neighbors house, and int main is ur house.
//they cant see whats inside your house, neither can you see inside their house
//so you gotta call them() to let them know about your variables
//subtract() <- no work, what i dont know x and y.. subtract(int x, int y) wow thank for calling brader

int main(){

    /* variable scope = Refers to where a variable is recognized and accessible.
    variables can share the same name if they're in different scopes
    
    scopes{} - Set of curly braces. Anything within those curly braces is a local scope.
    within the same scope, two variables cannot share the same name.
    
    FOR EXAMPLE:

    int main(){
    
    int result = 0;
    int result = 1; 
    }
    IS INVALID                                                                     
    
    BUT in the case of:
    
    int add(int x, int y){}
    
    int main(){
    int add = 3;  <--- variable functions without a problem.                          }*/

    int x= 5;
    int y= 6;


    int result = subtract(x, y);

    printf("%d", result);

}