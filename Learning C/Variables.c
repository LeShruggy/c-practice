#include <stdio.h>
#include <stdbool.h>

int main(){

//variable = A reusable contianer for a value.
//           Behaves as if it were the value it contains

/* int is numbers, age is the variable name, "=" assigns it a specific value, 25 is the specific value,
semicolon to end statement */

//int is a whole integer they cant store decimals. its still printable but it wont show '.5' in the case of '25.5'
int age = 17;
int year = 2026;
int quantity = 67;

/*"%" to insert a variable, format specifier is d meaning decimal. then add a coma outside the parenthesis
and specify which variable you'd like to add in this case its age.*/

printf("You are %d years old!\n", age);
printf("The year is curretnly %d.\n", year);
printf("I have ordered %d burgers.\n", quantity);

//To store a decimal portion use float meaning floating point number.

float gpa = 94.55;
float price = 34.4567;
float temperature = 26.3;

//%f for floating point number.
printf("My gpa for the second semester of 12th grade is %f!\n", gpa);
printf("Its currenly %.1f°C outside. Kinda hot.\n", temperature);

/*float integers usually display up to 6 decimal points. if ya wanna modify this add .x on your float formatspecifier.
notice how the variable has 4 decimal points but the .2 renders it to only 2 in the output*/
printf("A pack of ice costs about %.2f. I hope you brought enough!\n", price);

//float can only store up to 6-7 decimal points. to add more use double

double pi = 3.14159265358979;
double e = 2.7182818284;

/*To display double use lf meaning long float. double doesnt display it automatically so u still gotta specify how
many numbers you're intending to display*/
printf("The value of pi is %.15lf.\n", pi);
printf("The value of Euler's number is %.10lf.\n", e);


//to store characters use char, when working with characters u have to put SINGLE quotes. Char only allow single character.

char grade = 'A';
char symbol = '+';

//format specificer is %c
printf("The grade i got on the recent test is %c.\n", grade);
printf("If you want to add something in the calculator. You must use '%c'.\n", symbol);

/*to store more than one character, still use char but add a pair of square boxes.
This [] is called an array, it can store more than one value.
IMPORTANT. When dealing with strings always use double quotes'"' single quotes will error.*/

char name[] = "Sebastian";
char food[]= "Palabok";
char email[] = "insync421@gmail.com";

//format specificer for more than one charac is '%s' meaning string
printf("Hello, my name is %s!\n", name);  
printf("My favorite food is %s.\n", food);
printf("Your email is %s\n", email);

/*To work with Booleans you must include a header file <stdbool.h>
Bool's are binary they are either true or false. True means 1. False means 0. Only 2 possible values*/

/*true corresponds with the number one, so replacing true with 1 here is fine. Same thing with 0 and False.
true/false statements can never be capitalized!*/

bool isOnline = true;
bool isOffline = 0;

printf("%d\n", isOnline);
printf("%d\n", isOffline);

// int = whole numbers (4 bytes in modern systems) %d
// float = single-precision decimal number (4 bytes) %f
// double = double-precision decimal number (8 bytes) %lf
// char = single character (1 byte) %c
// char[] = array of characters (size varies) %s
// bool = true or false (1 byte, requires <stdbool.h>)

return 0;

}