#include <stdio.h>
#include <string.h>

int main() {

/*int age;
float gpa;
char grade;
char name;

If you were to declare variabless without assigning them a value it can lead to undefined behavior. Printing them
would lead to random characters. This is perfectly fine just be sure not to use them. Out of good habit its best to
assign these unassigned variables so that in case of displaying them it wouldn't be bollocks or random shit.
for int and float numbers; 0 is fine. '\0' null terminator for char, and for a string just empty "". again not strictly
necessary just a good habit.*/

//--------------------------------------------------------

int age = 0;
float gpa = 0.0f;
char grade = '\0'; //<-- null terminator
char name[30] = ""; 
//when char is not assigned to anything you must specify how much bytes. here 30 is equal to 30 bytes/30 chars

//to get user input we use the input called scanf. 
//"&" is the address of operator basically we're saying add the address of our variable age   

printf("Enter your age: ");
scanf("%d", &age);
// if you were to only include scanf the terminal would just be empty. 
//Make sure to add a print function(28) asking for user input preceeding the scan function

printf("Enter your gpa: ");
scanf("%f", &gpa);

printf("Enter your grade: ");
scanf(" %c", &grade);

/*scanf("%c", &grade);if you were to run this in terminal you may notice that you arent given a chance to input a grade.
This is because after you entered your gpa variable, theres a new line character within the input buffer (gpa\n)
When we read that floating point number scanf("%f", &gpa);, that new line charac is still within the input buffer.

Our C program picked up that variable and assigned it in to our grade variable. So we need to clear that input buffer 
before assigning our grade variable. A shortcut to doing that is to add a space before the percent sign.
%c ---> % c, this tells our c program to skip over that new line character.
*/

getchar();
printf("Enter your full name: ");
fgets(name, sizeof(name), stdin);

/*scanf cant read any white spaces. If u were to put in characs with spaces in between, only the first charac 
that didnt get spaced will be outputted. So if u input "George floyd" output would only be "George". A solution
to this is to use a different function called fgets means file get string. But we have to change up our code so from
scanf("%s", &name); to fgets(name, 30, stdin); 30 is the amount of bytes set on ur variable, stdin means standard input.
OR if you dont want to type in 30 manually just put sizeof(name) instead then you wont need to type it in manually.

Now just like last time we're encountering the same issue with the new line character. Unlike last time where we had
the luxury of just adding a space, with fgets we cant do that no mo. So we have to input a separate function called the
"getchar();" function above printf */

printf("%d\n", age);
printf("%.2f\n", gpa);
printf("%c\n", grade);
printf("%s\n", name);

/*What if we were to change the sequence of print outs, what if the last print statement (name) preceeds everything?
printf("%s\n", name);
printf("%d\n", age);
printf("%.2f\n", gpa);
printf("%c\n", grade);

Everything still prints out however we'll have a new line in between!

Output:
Sebastian Aliwanag

17
3.20
A

This is because the fgets function from name, reads a whole line of input. When you hit enter to submit the input data,
it includes that enter key. Visualizing this if you were to input George Floydd theres a secret new line charac w that!
name = Goerge Floydd\n <--- how to remove this \n?? One way to do that is to: 

1. Get help with a new header file : #include <string.h> <-- this provides a lot of useful functions when working w strings
2. Now following the f gets function, we put in a new line, name[strlen(name) - 1] = '\0' 
so name variable then use the function strlen(string length), name variable again, - 1, then null terminator without ';'

getchar();
printf("Enter your full name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0'

New Output:
Sebastian Aliwanag
17
3.20
A

That new line character is now removed!!
*/


return 0;

}