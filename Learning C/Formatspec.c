#include <stdio.h>

int main(){

/* Format specifier - Special tokens that begin with a  % symbol, followed by a character that specifies the 
data type. For example in %.3lf the value .3 indicates to display up to 3 decimals, while the characters lf, 
specifies the data type, which in this case is the long float.

Format specifiers control how data is displayed or interpreted with: width precision and flags.
*/

int age = 17;
float price = 67.67;
double pi = 3.1415926535;
char currency = 'P';
char name[] = "Sebastian"; 
//To display these variable using print out we'll have to use a format specifier

printf("I am %d years old\n", age);
printf("The price for that figurine is %.2f\n", price);
printf("The digits of pi are: %.10lf\n", pi);
printf("The currency of the Philippines is: %c\n", currency);
printf("My name is %s!\n", name);

//---------------------------------------------
//width

int num1 = 1;
int num2 = 10;
int num3 = 100;
int num4 = -100;

/*the number that we place between % and d specifies the width of a character. The width 
specifies the minimum amount of characters to print.*/

printf("%4d\n", num1);
printf("%3d\n", num2);
printf("%3d\n", num3);

/*Even if the characs dont reach the minimum amount, they'll still be printed with invisible characs 
amounting to the total width needed to be printed.*/

/*you can left justify these values by adding a negative sign before the number.Seems like nothing changed
 but if ya drag the mouse to the left of the number theres gonna be some spaces.*/

printf("%-4d\n", num1);
printf("%-3d\n", num2);
printf("%-3d\n", num3);

//you can also add leading zeroes by preseating the number with a zero. Rather than having spaces, we got 0's

printf("%04d\n", num1);
printf("%03d\n", num2);
printf("%03d\n", num3);

/*If you add a plus sign, if the numbers positive youll have a plus sign, if its a negative youll
have a negative sign*/

printf("%+d\n", num1);
printf("%+d\n", num2);
printf("%+d\n", num3);
printf("%+d\n", num4);

//---------------------------------------------
//precision

float price1 = 19.99;
float price2 = 1.56;
float price3 = -100.00;

/*before the corresponding letter of the data type ya can add a dot and a number to specify how many digits
are to be displayed after a decimal. In the case of 78.65 if we were to format it as %.1f, the print will
only show 78.6*/

//Output will be rounded if we were to display it less than the given variable. (See in the case of price2)
printf("%.2f\n", price1);
printf("%.1f\n", price2);
printf("%.2f\n", price3);

//---------------------------------------------
//width, precision, and flags together

float price4 = 25.85;
float price5 = 6.78;
float price6 = -200.00;

printf("%+7.2f\n", price4);
printf("%+7.2f\n", price5);
printf("%+7.2f\n", price6);
/*%7.2f = % format specifier. + to determine whether number is positive or negative. 7 width of float.
.2 decimal points shown. f data type*/



return 0;

}