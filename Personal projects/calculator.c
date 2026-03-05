#include <stdio.h>
#include <math.h>

int main(){

    double number1 = 0.0;
    char operator = '\0';
    double number2 = 0.0;
    double result = 0.0;

    printf("CYKA WelCOME to RAssiAN Calkyelator\n");
    printf("Enter de first of number: ");
    scanf("%lf", &number1);
    printf("Enter operater of yuse (+ - * /): ");
    scanf(" %c", &operator);
    printf("Enter de second child: ");
    scanf(" %lf", &number2);

    switch(operator){
        case '+':
        result = number1 + number2;
        printf("BLYAAAAT: %.1000lf", result);
        break;
        case '-':
        result = number1 - number2;
        printf("BLYAAAAT: %.1000lf", result);
        break;
        case '*':
        result = number1 * number2;
        printf("BLYAAAT: %.1000lf", result);
        break;
        case '/':
             if(number2 == 0){
                printf("BLYAAATTT ZERO NO!!!!");
             }
             else if(number1 == 0){
                printf("BLYAAAT ZERO NO!!!!");
             }
             else{
                result = number1 / number2;
             }
        break;
        printf("BLYAAAT: %.1000lf", result);
        break;
        default:
        printf("You stupd facking idyot u break de fucking calcu BLYAAAT!!!!");
    }

}