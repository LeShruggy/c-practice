#include <Stdio.h>

/*void*/  int square(int num){ //(int num) <-- parameter saying we only accept integer of num 
    int result = num * num; //local vairable of result = number times'ed by itself
    //however directly printing (square)2 wont work.
    //We'll need the return keyword to return a value/variable back to the other function

    return result;
    //if you're returning a value/variable you'll have to list the data type of what ure returning
    //this is where you change void to the data type youre returning. In this case an "int".

    //IMPORTANT instead of coding out int result = num * num we can just directly input
    //return num * num; and it does the same thing. See double example down.

    //if we were returning a double. Parameter would also be a double so on and so forth.
}

double cube(double num){

    return num * num * num;

}

int main(){

    // return = returns a value back to where you call a function(function can send smth back)

    /*int x = 2 * 2;
    int y= 3 * 3;
    int z = 4 * 4;
    Instead of typing it out we can now use a function */
    
    //the name "square" is from the function name above
    int x = square(2); //since result is num * num. square(2) is 2 * 2
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    double x2 = cube(4.5);
    double x3 = cube(6.7);
    double x4 = cube(9.8);

    printf("%lf\n", x2);
    printf("%lf\n", x3);
    printf("%lf\n", x4);
}