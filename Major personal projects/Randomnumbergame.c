#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>

void clear_input_buffer();
void Rules();
void gamemode1();
void gamemode2();
void gamemode3();

int main(){

    srand(time(NULL));

    char RuleCheck = '\0';
    char DifficultyChoice = '\0';
    int answer = 0;
    int tries = 0;
    int HighStakes = 0;

    char choice = '\0';
    int gamemode = 0;

    int LightworkNumber;
    int EasyNumber;
    int MediumNumber;
    int HardNumber;
    int ImpossibleNumber;

    printf("Welcome to the Guessing number game!\n");
    Sleep(1500);
    printf("Would you like to know the rules (Y/N)? ");
    scanf("%c", &RuleCheck);

    RuleCheck = tolower(RuleCheck);

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

    printf("\nSelect a gamemode: ");
    Sleep(1000);
    printf("\n1. Normal Guessing");
    Sleep(1000);
    printf("\n2. High Stakes Guessing");
    Sleep(1000);
    printf("\nEnter the number corresponding to the mode: ");
    scanf("%d",&gamemode);

    if(gamemode == 1){
        gamemode1();
    }

    else if(gamemode == 2){
        gamemode2();
    }

    else{
        
        do{

            printf("Unrecognized character, please Select a gamemode!\n");
            Sleep(1500);
            printf("\n1. Normal Guessing");
            Sleep(1500);
            printf("\n2. High Stakes Guessing");
            Sleep(1500);
            printf("\n3. Adventure Mode");
            Sleep(1500);
            printf("\nEnter the number corresponding to the mode: ");
            scanf("%d",&gamemode);

            if(gamemode == 1){
                gamemode1();
            }

            else if(gamemode == 2){
                gamemode2();
            }

        }while(gamemode != 1 && gamemode != 2);
    
    }




    Sleep(1500);
    printf("\nPlease select the difficulty, \n");
    Sleep(1500);
    printf("The numbers beside represents the number pool you'll have to guess from: ");
    Sleep(1500);

    if(gamemode == 2){

        do{ 

            clear_input_buffer();
            printf("\n1. LIGHTWORK   |  1-3 \n");
            printf("2. EASY        |  1-5 \n");
            printf("3. MEDIUM      |  1-10 \n");
            printf("4. HARD        |  1-25 \n");
            printf("5. IMPOSSIBLE  |  1-50 \n");
            printf("Enter the number of your desired difficulty (1,2,3,4,5): ");
            scanf("%d", &DifficultyChoice);

            if(DifficultyChoice <= 0 &&DifficultyChoice >= 6){

                do{
                    clear_input_buffer();
                    printf("Invalid Choice!/n");
                    printf("\n1. LIGHTWORK   |  1-3 \n");
                    printf("2. EASY        |  1-5 \n");
                    printf("3. MEDIUM      |  1-10 \n");
                    printf("4. HARD        |  1-25 \n");
                    printf("5. IMPOSSIBLE  |  1-50 \n");
                    printf("Enter the number of your desired difficulty (1,2,3,4,5): ");
                    scanf("%d", &DifficultyChoice);


                }while(DifficultyChoice <= 0 &&DifficultyChoice >= 6);

            }

            printf("\nEnter the amount of tries you'd like: ");
            scanf("%d", &HighStakes);
            printf("\n");

            if(HighStakes <= 0){

                do{

                clear_input_buffer();
                printf("Only enter a valid positive number!");
                Sleep(1500);
                printf("Enter the amount of tries you'd like: ");
                scanf("%d", &HighStakes);

                }while(HighStakes <= 0);

            }

            if(HighStakes == 3 && DifficultyChoice == 1){

                printf("\nCome on!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!\n");
                Sleep(1500);
                printf("I did give you full authority on picking your number of tries\n");
                Sleep(2000);
                printf("But at least give yourself a challenge with a possibility of failure!\n");
                Sleep(1500);
                printf("Keep the tries at 1-2!: ");
                scanf("%d", &HighStakes);

                while(HighStakes != 1 && HighStakes != 2){

                    clear_input_buffer();
                    printf("\nCOME ONNN MAN\n");
                    Sleep(1500);
                    printf("Keep the tries at 1-2!: ");
                    scanf("%d", &HighStakes);

                }

            }

            if(HighStakes >= 5 && DifficultyChoice == 2){

                printf("\nCome on!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!\n");
                Sleep(1500);
                printf("I did give you full authority on picking your number of tries\n");
                Sleep(2000);
                printf("But at least give yourself a challenge with a possibility of failure!\n");
                Sleep(1500);
                printf("Keep the tries at 1-4!: ");
                scanf("%d", &HighStakes);

                while(HighStakes >=5 ){

                    clear_input_buffer();
                    printf("\nCOME ONNN MAN\n");
                    Sleep(1500);
                    printf("Keep the tries at 1-4!: ");
                    scanf("%d", &HighStakes);
                    
                }

            }

            if(HighStakes >= 10 && DifficultyChoice == 3){

                printf("\nCome on!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!\n");
                Sleep(1500);
                printf("I did give you full autority on picking your number of tries\n");
                Sleep(2000);
                printf("But at least give yourself a challenge with a possibility of failure!\n");
                Sleep(1500);
                printf("Keep the tries at 1-9!: ");
                scanf("%d", &HighStakes);

                while(HighStakes >= 10){

                    clear_input_buffer();
                    printf("\nCOME ONNN MAN\n");
                    Sleep(1500);
                    printf("Keep the tries at 1-9!: ");
                    scanf("%d", &HighStakes);
                    
                }

            }

            if(HighStakes >= 25 && DifficultyChoice == 4){

                printf("\nCome on!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!\n");
                Sleep(1500);
                printf("I did give you full autority on picking your number of tries\n");
                Sleep(2000);
                printf("But at least give yourself a challenge with a possibility of failure!\n");
                Sleep(1500);
                printf("Keep the tries at 1-24!: ");
                scanf("%d", &HighStakes);

                while(HighStakes >= 25){

                    clear_input_buffer();
                    printf("\nCOME ONNN MAN\n");
                    Sleep(1500);
                    printf("Keep the tries at 1-24!: ");
                    scanf("%d", &HighStakes);
                    
                }

            }

            if(HighStakes >= 50 && DifficultyChoice == 5){

                printf("\nCome on!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!");
                Sleep(500);
                printf("!\n");
                Sleep(1500);
                printf("I did give you full autority on picking your number of tries\n");
                Sleep(2000);
                printf("But at least give yourself a challenge with a possibility of failure!\n");
                Sleep(1500);
                printf("Keep the tries at 1-49!: ");
                scanf("%d", &HighStakes);

                while(HighStakes >= 50){

                    clear_input_buffer();
                    printf("\nCOME ONNN MAN\n");
                    Sleep(1500);
                    printf("Keep the tries at 1-49!: ");
                    scanf("%d", &HighStakes);
                    
                }

            }

            int LightworkNumber = (rand() % 3) + 1;
            int EasyNumber = (rand() % 5) + 1;
            int MediumNumber = (rand() % 10) + 1;
            int HardNumber = (rand() % 25) + 1;
            int ImpossibleNumber = (rand() % 50) + 1;

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


                do{ 

                    clear_input_buffer();
                    printf("Guess the number 1-3: ");
                    scanf("%d", &answer);
                    tries+=1;

                    if(answer == LightworkNumber){
                        break;
                    }

                    if(tries == HighStakes){
                        printf("WRONG!!! YOU");
                        Sleep(1500);
                        printf(" FAILURE!!!");
                        Sleep(1500);
                        printf("You have reached the maximum amout of tries!\n");
                        break;
                    }

                    else if(answer != LightworkNumber){
                        printf("Ya got it wrong!!");
                        Sleep(1500);
                        printf(" Try again!\n");
                    }

                    printf("Tries remaining: %d\n", HighStakes - tries);


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

                    if(answer == LightworkNumber){
                        break;
                    }

                    else if(tries == HighStakes){
                        printf("WRONG!!! YOU");
                        Sleep(1500);
                        printf(" FAILURE!!!");
                        Sleep(1500);
                        printf("You have reached the maximum amount of tries!\n");
                        break;
                    }

                    else if(answer != EasyNumber){
                        printf("Ya got it wrong!!");
                        Sleep(1500);
                        printf(" Try again!\n");
                    }

                    printf("Tries remaining: %d\n", HighStakes - tries);

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

                    if(answer == LightworkNumber){
                        break;
                    }

                    else if(tries == HighStakes){
                        printf("WRONG!!! YOU");
                        Sleep(1500);
                        printf(" FAILURE!!!");
                        Sleep(1500);
                        printf("You have reached the maximum amount of tries!\n");
                        break;
                    }

                    else if(answer != MediumNumber){
                        printf("Ya got it wrong!!");
                        Sleep(1500);
                        printf(" Try again!\n");
                    }

                    printf("Tries remaining: %d\n", HighStakes - tries);


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

                    if(answer == LightworkNumber){
                        break;
                    }

                    else if(tries == HighStakes){
                        printf("WRONG!!! YOU");
                        Sleep(1500);
                        printf(" FAILURE!!!");
                        Sleep(1500);
                        printf("You have reached the maximum amount of tries!\n");
                        break;
                    }


                    else if(answer != HardNumber){
                        printf("Ya got it wrong!!");
                        Sleep(1500);
                        printf(" Try again!\n");
                    }

                    printf("Tries remaining: %d\n", HighStakes - tries);

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

                    if(answer == LightworkNumber){
                        break;
                    }

                    else if(answer != ImpossibleNumber){
                        printf("Ya got it wrong!!");
                        Sleep(1500);
                        printf(" Try again!\n");
                    }

                    else if(tries == HighStakes){
                        printf("WRONG!!! YOU");
                        Sleep(1500);
                        printf(" FAILURE!!!");
                        Sleep(1500);
                        printf("You have reached the maximum amount of tries!\n");
                        break;
                    }

                    printf("Tries remaining: %d\n", HighStakes - tries);

                }while(answer != ImpossibleNumber);
            
            }

            if(tries != HighStakes){

                printf("\nYOU GOT IT IN %d TRIE/S!\n", tries);
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
                printf("\nCongratulations!");
                Sleep(1000);
                printf("!");
                Sleep(1000);
                printf("!");
                Sleep(1000);
                printf("!\n");

            }

            if(tries == HighStakes){

                printf("\n Nice try tho! ");
                Sleep(1500);
                printf("I'm sure the last guy did worse anyways! ");
                Sleep(1500);
                printf("Total tries: %d\n", tries);

            }

            Sleep(1000);
            printf("\nWould you like to try a different High Stakes difficulty (Y/N)? ");
            scanf(" %c", &choice);
            
            tries-=tries;

            choice = tolower(choice);

            while(choice != 'y' && choice != 'n'){

                printf("Invalid answer! Please try again!");
                Sleep(1500);
                printf("Would you like to try a different difficulty (Y/N)? ");
                scanf(" %c", &choice);

            }
            
        } while(choice == 'y');

    }

    if(gamemode == 1){

        do{ 

            clear_input_buffer();
            printf("\n1. LIGHTWORK   |  1-3 \n");
            printf("2. EASY        |  1-5 \n");
            printf("3. MEDIUM      |  1-10 \n");
            printf("4. HARD        |  1-25 \n");
            printf("5. IMPOSSIBLE  |  1-50 \n");
            printf("Enter the number of your desired difficulty (1,2,3,4,5): ");
            scanf("%d", &DifficultyChoice);

            if(DifficultyChoice <= 0 &&DifficultyChoice >= 6){

                do{
                    clear_input_buffer();
                    printf("Invalid Choice!/n");
                    printf("\n1. LIGHTWORK   |  1-3 \n");
                    printf("2. EASY        |  1-5 \n");
                    printf("3. MEDIUM      |  1-10 \n");
                    printf("4. HARD        |  1-25 \n");
                    printf("5. IMPOSSIBLE  |  1-50 \n");
                    printf("Enter the number of your desired difficulty (1,2,3,4,5): ");
                    scanf("%d", &DifficultyChoice);


                }while(DifficultyChoice <= 0 &&DifficultyChoice >= 6);

            }
            

            int LightworkNumber = (rand() % 3) + 1;
            int EasyNumber = (rand() % 5) + 1;
            int MediumNumber = (rand() % 10) + 1;
            int HardNumber = (rand() % 25) + 1;
            int ImpossibleNumber = (rand() % 50) + 1;

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

                    else if(answer == LightworkNumber){
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

                    else if(answer == EasyNumber){
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

                    else if(answer == MediumNumber){
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

                    else if(answer == HardNumber){
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
            
            tries-=tries;

            choice = tolower(choice);

            while(choice != 'y' && choice != 'n'){

                printf("Invalid answer! Please try again!");
                Sleep(1500);
                printf("Would you like to try a different difficulty (Y/N)? ");
                scanf(" %c", &choice);

            }
            
        } while(choice == 'y');

    }

    printf("\nAlright then! Thanks for playing the game!\n");
    printf("March 15-16, 3~ hours, Seb");

}

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
    printf("\nAnd also the number wont change, so its not a moving target!");
    Sleep(1500);
    printf(" Ok?\n");
}

void gamemode1(){
    printf("You have selected Normal Guessing! You just guess!\n");
}

void gamemode2(){
    printf("You have selected High Stakes Guessing!\n");
    Sleep(1500);
    printf("Normal guess the number but you have a limited amout of tries.\n");
}