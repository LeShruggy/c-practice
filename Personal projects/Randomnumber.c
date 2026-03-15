#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>

void clear_input_buffer();
void Rules();

int main(){

    srand(time(NULL));

    char RuleCheck = '\0';
    char DifficultyChoice = '\0';
    int answer = 0;
    int tries = 0;

    char choice = '\0';

    int LightworkNumber;
    int EasyNumber;
    int MediumNumber;
    int HardNumber;
    int ImpossibleNumber;

    printf("Welcome to the Guessing number game!\n");
    Sleep(1500);
    printf("Would you like to know the rules (Y/N)? ");
    scanf("%c", &RuleCheck);

    tolower(RuleCheck);

    if(RuleCheck == 'y'){
        Rules();
    }

    else if(RuleCheck != 'n' && RuleCheck != 'y'){

        while(RuleCheck != 'n' && RuleCheck != 'y'){

            printf("\nInvalid answer!\n");
            Sleep(1500);
            printf("Would you like to know the rules (Y/N)? ");
            scanf(" %c", &RuleCheck);

            if(RuleCheck == 'y'){
                Rules();
            }

        }

    }

    Sleep(1500);
    printf("\nPlease select the difficulty, \n");
    Sleep(1500);
    printf("The numbers beside represents the number pool you'll have to guess from: ");
    Sleep(1500);


    do{ 

        clear_input_buffer();
        printf("\n1. LIGHTWORK   |  1-3 \n");
        printf("2. EASY        |  1-5 \n");
        printf("3. MEDIUM      |  1-10 \n");
        printf("4. HARD        |  1-25 \n");
        printf("5. IMPOSSIBLE  |  1-50 \n");
        printf("Enter the number of your desired difficulty (1,2,3,4,5): ");
        scanf("%d", &DifficultyChoice);

        if(DifficultyChoice == 1){
            printf("\nLightwork mode selected\n");
            Sleep(1500);
            printf("Starting in: ");
            Sleep(1000);
            printf("3 ");
            Sleep(1000);
            printf("2 ");
            Sleep(1000);
            printf("1\n");
            Sleep(1000);

            int LightworkNumber = (rand() % 3) + 1;
            int EasyNumber = (rand() % 5) + 1;
            int MediumNumber = (rand() % 10) + 1;
            int HardNumber = (rand() % 25) + 1;
            int ImpossibleNumber = (rand() % 50) + 1;

            do{ 

                clear_input_buffer();
                printf("Guess the number 1-3: ");
                scanf("%d", &answer);
                tries+=1;

                if(answer != LightworkNumber){
                    printf("Ya got it wrong!!");
                    Sleep(1500);
                    printf(" Try again!\n");
                }

                if(answer == LightworkNumber){
                    break;
                }

            }while(answer != LightworkNumber);
        
        }

        if(DifficultyChoice == 2){
            printf("\nEasy mode selected\n");
            Sleep(1500);
            printf("Starting in: ");
            Sleep(1000);
            printf("3 ");
            Sleep(1000);
            printf("2 ");
            Sleep(1000);
            printf("1\n");
            Sleep(1000);

            do{ 

                clear_input_buffer();
                printf("Guess the number 1-5: ");
                scanf("%d", &answer);
                tries+=1;

                if(answer != EasyNumber){
                    printf("Ya got it wrong!!");
                    Sleep(1500);
                    printf(" Try again!\n");
                }

                if(answer == EasyNumber){
                    break;
                }

            }while(answer != EasyNumber);

        }

        if(DifficultyChoice == 3){
            printf("\nMedium mode selected\n");
            Sleep(1500);
            printf("Starting in: ");
            Sleep(1000);
            printf("3 ");
            Sleep(1000);
            printf("2 ");
            Sleep(1000);
            printf("1\n");
            Sleep(1000);

            do{ 

                clear_input_buffer();
                int MediumNumber = (rand() % 10) + 1;
                printf("Guess the number 1-10: ");
                scanf("%d", &answer);
                tries+=1;

                if(answer != MediumNumber){
                    printf("Ya got it wrong!!");
                    Sleep(1500);
                    printf(" Try again!\n");
                }

                if(answer == MediumNumber){
                    break;
                }

            }while(answer != MediumNumber);
        
        }

        if(DifficultyChoice == 4){
            printf("\nMedium mode selected\n");
            Sleep(1500);
            printf("Starting in: ");
            Sleep(1000);
            printf("3 ");
            Sleep(1000);
            printf("2 ");
            Sleep(1000);
            printf("1\n");
            Sleep(1000);

            do{ 

                clear_input_buffer();
                int HardNumber = (rand() % 25) + 1;
                printf("Guess the number 1-25: ");
                scanf("%d", &answer);
                tries+=1;

                if(answer != HardNumber){
                    printf("Ya got it wrong!!");
                    Sleep(1500);
                    printf(" Try again!\n");
                }
                if(answer == HardNumber){
                    break;
                }

            }while(answer != HardNumber);
        
        }

        if(DifficultyChoice == 5){
            printf("\nMedium mode selected\n");
            Sleep(1500);
            printf("Starting in: ");
            Sleep(1000);
            printf("3 ");
            Sleep(1000);
            printf("2 ");
            Sleep(1000);
            printf("1\n");
            Sleep(1000);

            do{ 

                clear_input_buffer();
                int ImpossibleNumber = (rand() % 50) + 1;
                printf("Guess the number 1-50: ");
                scanf("%d", &answer);
                tries+=1;

                if(answer != ImpossibleNumber){
                    printf("Ya got it wrong!!");
                    Sleep(1500);
                    printf(" Try again!\n");
                }

                if(answer == ImpossibleNumber){
                    break;
                }

            }while(answer != ImpossibleNumber);
        
        }

        printf("\nYOU GOT IT IN %d TRIES!\n", tries);
        Sleep(1500);

        if(tries == 1){
            printf("That took only one try?!?! Youre insane! ");
        }

        else if(tries >= 2 && tries <= 4){
            printf("You nailed it with only that much tries?! ");
        }

        else if(tries >= 5 && tries <= 10){
            printf("That took a few tries but you still got it! ");
        }

        else if(tries >= 10 && tries <= 20){
            printf("Thats quite decent I'd say! ");
        }

        else if(tries >= 21 && tries <= 50){
            printf("Dont fret too much! Its just a luck game! ");
        }

        else if(tries >= 51){
            printf("Holy shit you should learn when to give up! ");
        }

        Sleep(1500);
        printf("Congratulations!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!\n");
        Sleep(1000);
        printf("Would you like to try a different difficulty (Y/N)? ");
        scanf(" %c", &choice);

        choice = tolower(choice);

        while(choice != 'y' && choice != 'n'){

            printf("Invalid answer! Please try again!");
            Sleep(1500);
            printf("Would you like to try a different difficulty (Y/N)? ");
            scanf(" %c", &choice);

        }
        
    } while(choice == 'y');

    printf("\nAlright then! Thanks for playing the game!\n");
    printf("March 15, 1 hour, Seb");

}

//TO DO TOMORROW:
//ADD OPTION OF HIGH STAKES MODE & ADVENTURE MODE

void clear_input_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void Rules(){
    printf("\nMan just guess the number.");
    Sleep(750);
    printf(".");
    Sleep(750);
    printf(".");
    Sleep(750);
    printf(".");
    Sleep(750);
    printf(".");
    printf(" Ok?\n");
}
