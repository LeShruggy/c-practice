#include <stdio.h>
#include <string.h>

int main(){

    char noun[50] = "";
    char noun2[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) -1] = '\0'; 
    //for removing fgets new lines: variable, strlen(variable), -1, then null terminator

    printf("Enter a noun (animal or a person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) -1] = '\0';

    printf("Enter an adjective (emotion): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) -1] = '\0';

    printf("Enter a verb (end w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) -1] = '\0';

    
    printf("Enter an adjective (description ending w/-est): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) -1] = '\0';
    //IMPORTANT adjective3[strlen(adjective3), -1] = '\0'; WILL NOT WORK. WHY? CUZ U PLACED A COMMA!!! 

    printf("Enter a noun (animal or a person): ");
    fgets(noun2, sizeof(noun2), stdin);
    noun2[strlen(noun2) -1] = '\0';
    
    printf("\nOne sunny afternoon %s was superr bored!\n", noun);
    printf("He didn't know what to do. So he called up his other friend %s.\n", noun2);
    printf("This guy was a bit special... After all he was a very %s guy...\n", adjective1);
    printf("%s approached his friend and said, Hey there! What are we going to do today?\n", noun2);
    printf("Today is so %s.. %s replied. You thinking what I'm thinking?\n", adjective2, noun);
    printf("I THINK SO! %s replied excitedly.\n", noun2);
    printf("%s!!!!! %s and %s exclaimed in agreement.\n",verb, noun, noun2);
    printf("This is going to be the most %s day of our lives!!!",adjective3);

    return 0;
}