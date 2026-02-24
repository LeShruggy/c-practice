#include <stdio.h>

int main(){

// arithmetic operators = + - * / % ++ --

int x = 10;
int y = 3;
int z = 0; 
//we're using x and y to perform various operators on x and y and store the result within z.

//z = x + y; here we did the indicated operation of 3+2, the printed result here would be 5 shown through z

//z = x - y; same thing, 2-3 = -1, printed result still shown through %d, z

//z = x * y; * is times. 2 x 3 is 6

/*z = x / y; dividing with integers is weird. If you were to divide 2 and 3 the result would be 0.66~ but if you were
to use integers as your variables then the result would be 0 since the decimal portion wont be retained.In order to 
correct this you must use floating point numbers on your resulting variable (z) and operation variable (y or x)*/

/*z = x % y; the modulus operator gives you the remainder of any division. Great in determining whether a number is
even or odd. if x was to 10, and y was to 3, z = x % y would be 1. If y was changed to 2, z = x % y would be 0.*/

// increment adds, decrement subtracts if x is 10; x++; would be 11 and x--; would be 9. Used in loops.

// Augemnted assignment operators - Basically a shortcut when you're reassigning the same variable

//x+=2; is a shortened version of x = x + 2;
//x-=3; is a shortened version of x = x - 3;
//x*=2; is x = x * 2;
//x/=2; is x = x / 2;

printf("%d", x); 



return 0;

}