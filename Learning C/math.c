#include <stdio.h>
#include <math.h> //Useful header file if ure doing a lot of math operations


int main()
{
    int x = 9;
    int x1 = 2;
    float x2 = 3.5;
    float x3 = 3.14;
    float x4 = 3.99;
    int x5 = -3;
    float x6 = 3;
    float x7 = 45;
    float x8 = 45;
    float x9 = 45;

    x = sqrt(x); //sqrt function returns the square root of whatever x is.
    x1 = pow(x1, 3); //pow raises whatever x is to whatever the power you want it to be
    x2 = round(x2); //rounds off x
    x3 = ceil(x3); //rounds up the number
    x4 = floor(x4); //rounds down the number 
    x5 = abs(x5); //absolute value function will give u the distance from 0 as a positive numebr
    x6 = log(x6); //gives the natural logarithm of a  number
    x7 = sin(x7); //gives the sin of a number 
    x8 = cos(x8); //gives the cosin of a number 
    x9 = tan(x9); //gives the tangent of a number

    printf("%d\n", x);
    printf("%d\n", x1); 
    printf("%f\n", x2); 
    printf("%f\n", x3); 
    printf("%f\n", x4); 
    printf("%d\n", x5); 
    printf("%f\n", x6); 
    printf("%f\n", x7); 
    printf("%f\n", x8); 
    printf("%f\n", x9); 



    return 0;
}