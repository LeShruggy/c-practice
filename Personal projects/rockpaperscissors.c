#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>

void Max(); // Max tries
void GetOut(); // Dumb
int Invalid(char choice); // Neither y or n
void clear_input_buffer();
int No(char choice); // N, n
int Yes(char choice); // Y, y
int InvalidGame(int game);
int InvalidPlay(char play);
int CheckPlay(char play);
int GameMode1();
void GameMode2();
void GameMode3();
void GameMode3Ex();
int GameMode4();
void updateScore(int *player, int *computer, char name[]);
int InvalidMessage(char *choice);


int main(){

    srand(time(NULL));

    char name[50] = "";
    char choice = '\0';
    int gamemode = 0;
    char play = '\0';
    char play2 = '\0';
    char play3 = '\0';

    int max = 3; //modulus
    int min = 1; //offset
    int randomNum = (rand()% (max - min + 1)) + min;

    int player = 0;
    int computer = 0;
    int games;
    int round = 1;

    printf("Lets play rock paper scissors!\n");
    Sleep(2000);
    printf("But before that!");
    Sleep(1000);
    printf(" Enter your name challenger: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';
    Sleep(2000);
    printf("\nAnd your desired gamemode:\n");
    Sleep(1500);
    printf("1. First to _\n");
    Sleep(1500);
    printf("2. Endless\n");
    Sleep(1000);
    printf("3. Dual Hand, Endless\n");
    Sleep(1000);
    printf("4. Dual Hand, First to _\n");
    printf("Enter the number: ");

    if(scanf("%d", &gamemode) != 1){
            Sleep(1000);
            printf("Invalid Answer!\n");
            while(getchar() != '\n');
        }

    Sleep(1500);

    if(gamemode == 1){
        games = GameMode1();
    }

    else if(gamemode == 2){
        GameMode2();
    }

    else if(gamemode == 3 || gamemode == 4){

        if(gamemode == 3){
            GameMode3();
        }

        else if(gamemode == 4){
            games = GameMode4();
        }
    
        Sleep(1500);
        printf("Would you like an example of the 'Dual Hand' gamemode (Y/N)? ");
        scanf(" %c", &choice);

        if(Yes(choice)){

            GameMode3Ex();
        }

        if(No(choice)){
            printf("\nAlrighty, a fast learner!\n");
            Sleep(1500);
        }

        if(Invalid(choice)){

            for(int i = 0; i < 5; i++){
                clear_input_buffer();
                printf("\nUnrecognized character, please try again.");
                Sleep(2000);
                printf(" Would you like an example (Y/N)? ");
                scanf(" %c", &choice);

                if(Yes(choice)){
                    GameMode3Ex();
                }

                else if(No(choice)){
                    break;
                }

                if(i == 4){
                    GetOut();
                }

            }

        }

    }

    else{

        for(int i = 0; i < 5; i++){

            printf("\nYou have not selected a gamemode.\n");
            Sleep(1500);
            printf("Press 1 for First to _; Press 2 for Endless; Press 3 for Dual Hand Endless; Press 4 for Dual Hand First to _: ");

            if(scanf("%d", &gamemode) != 1){
            Sleep(1000);
            printf("Invalid Answer!\n");
            while(getchar() != '\n'); // clear bad input
            continue; //skips the rest of the loop and asks the question again
            }

            if(gamemode == 1){
                games = GameMode1();
                break;
            }

            else if(gamemode == 2){
                GameMode2();
                break;
            }

            else if(gamemode == 3 || gamemode == 4){

                if(gamemode == 3){
                    GameMode3();
                    break;
                }
               
                else if(gamemode == 4){
                    games = GameMode4();
                    break;
                }

                Sleep(1500);
                printf("Would you like an example of the 'Dual Hand' gamemode (Y/N)? ");
                scanf(" %c", &choice);

                if(Yes(choice)){

                    GameMode3Ex();
                }

                if(No(choice)){
                    printf("\nAlrighty, a fast learner!\n");
                    Sleep(1500);
                }

                if(Invalid(choice)){

                    for(int i = 0; i < 5; i++){
                        clear_input_buffer();
                        printf("\nUnrecognized character, please try again.");
                        Sleep(2000);
                        printf(" Would you like an example (Y/N)? ");
                        scanf(" %c", &choice);

                        if(Yes(choice)){
                            GameMode3Ex();
                        }

                        else if(No(choice)){
                            break;
                        }

                        if(i == 4){
                            GetOut();
                        }

                    }

                }

            if(i == 4){
                GetOut();
            }

        } 

        }
    }

    printf("\nAlright Stinky %s! Rules are:", name);
    Sleep(2000);
    printf(" Type 'R' for rock,");
    Sleep(1000);
    printf(" 'S' for scissors,");
    Sleep(1000);
    printf(" and 'P' for paper.\n");
    Sleep(2000);
    printf("\nAre you ready (Y/N)? ");
    scanf(" %c", &choice);

    if(No(choice) || Invalid(choice)){

           for(int i = 0; i < 5; i++){

                if(No(choice)){
                    clear_input_buffer();
                    printf("\nAlright then just let me know when!");
                    Sleep(2000);
                    printf(" Are you ready now (Y/N)? ");
                    scanf(" %c", &choice);

                }
            

                else if(Invalid(choice)){

                    clear_input_buffer();
                    printf("\nUnrecognized character, please try again.");
                    Sleep(2000);
                    printf(" Are you ready now (Y/N)? ");
                    scanf(" %c", &choice);
                }
                
            }

    }

    if(No(choice)){
        Max();
    }

    else if(Invalid(choice)){
        GetOut();
    }

    printf("\nTHEN GET READY!\n");
    Sleep(1500);

    if(gamemode == 1 || gamemode == 4){
        printf("Remember! Best of %d!\n", games);
        Sleep(1500);
    }

    if(gamemode == 1 || gamemode == 2){

        printf("ROUND 1\n");
        Sleep(1000);
        printf("ROCK ");
        Sleep(1000);
        printf("PAPER ");
        Sleep(1000);
        printf("SCISSOR ");
        Sleep(1000);
        printf("SHOOT!\n");
        printf("Enter your play: ");
        scanf(" %c", &play);

    }

    play = tolower(play);

    if(gamemode == 1 || gamemode == 2){

        if(InvalidPlay(play)){

            for(int i = 0; i < 5;i++){

                printf("\nYou have not entered a valid play\n");
                Sleep(1500);
                printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                scanf(" %c", &play);
                play = tolower(play);

                if(CheckPlay(play)){
                    break;
                }

                else if(i == 4){
                    GetOut();
                }

            }

        }

    }


    if(CheckPlay(play) && gamemode == 2){

        do{

        int randomNum = (rand()% (max - min + 1)) + min;
        //If youre intending to use randomNum inside a loop then make sure to paste it on top
        //to get a randmoized result. No need for srand to be pasted multiple times.

            if(randomNum == 1){
                printf("SCISSORS!");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");

                    if(tolower(play) == 'p'){
                        printf("HAH!!!\n");
                        Sleep(1500);
                        printf("Scissors beats Paper! I win!\n");

                        computer+=1;
                        round+=1;

                        updateScore(&player, &computer, name); //& needed to get the updated scores

                    }

                    else if(tolower(play) == 's'){
                        printf("EHH?!\n");
                        Sleep(1500);
                        printf("A TIE!\n");
                        Sleep(1500);

                        round+=1;

                        updateScore(&player, &computer, name);

                    }

                    else if(tolower(play) == 'r'){
                        printf("DARN IT!!\n");
                        Sleep(1500);
                        printf("Rock beats scissors! You win :(\n");
                        Sleep(1500);

                        player+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    printf("\nWould you like to play more (Y/N): ");
                    scanf(" %c",&choice);

                    if(Invalid(choice)){

                        InvalidMessage(&choice);

                    }
            }

            else if(randomNum == 2){
                printf("PAPER!");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");

                    if(tolower(play) == 'r'){
                        printf("HAH!!!\n");
                        Sleep(1500);
                        printf("Paper beats rock! I win!\n");
                        Sleep(1500);

                        computer+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    else if(tolower(play) == 'p'){
                        printf("EHH?!\n");
                        Sleep(1500);
                        printf("A TIE!\n");
                        Sleep(1500);

                        round+=1;

                        updateScore(&player, &computer, name);

                    }

                    else if(tolower(play) == 's'){
                        printf("DARN IT!!\n");
                        Sleep(1500);
                        printf("Scissors beats Paper! You win :(\n");

                        player+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    printf("\nWould you like to play more (Y/N): ");
                    scanf(" %c",&choice);

                    if(Invalid(choice)){

                        InvalidMessage(&choice);

                    }
            }

            else if(randomNum == 3){
                printf("ROCK!");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");

                    if(tolower(play) == 's'){
                        printf("HAH!!!\n");
                        Sleep(1500);
                        printf("Rock beats scissors! I win!\n");
                        Sleep(1500);

                        computer+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    else if(tolower(play) == 'r'){
                        printf("EHH?!\n");
                        Sleep(1500);
                        printf("A TIE!\n");
                        Sleep(1500);

                        round+=1;

                        updateScore(&player, &computer, name);

                    }

                    else if(tolower(play) == 'p'){
                        printf("DARN IT!!\n");
                        Sleep(1500);
                        printf("Paper beats Rock! You win :(\n");

                        player +=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    if(Invalid(choice)){

                        InvalidMessage(&choice);

                    }

                    printf("\nWould you like to play more (Y/N): ");
                    scanf(" %c",&choice);
            }

            if(No(choice)){
                break;
            }

            printf("\nTHEN GET READY!\n");
            Sleep(1500);
            printf("ROCK ");
            Sleep(1000);
            printf("PAPER ");
            Sleep(1000);
            printf("SCISSOR ");
            Sleep(1000);
            printf("SHOOT!\n");
            printf("Enter your play: ");
            scanf(" %c", &play);

            if(InvalidPlay(play)){

                for(int i = 0; i < 5;i++){

                    printf("\nYou have not entered a valid play\n");
                    Sleep(1500);
                    printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                    scanf(" %c", &play);
                    play = tolower(play);

                    if(CheckPlay(play)){
                        break;
                    }

                    else if(i == 4){
                        GetOut();
                    }

                }
            }

        }while(Yes(choice));

    }

    else if(CheckPlay(play) && gamemode == 1){

        do{

        int randomNum = (rand()% (max - min + 1)) + min;

            if(randomNum == 1){
                printf("SCISSORS!");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");

                    if(tolower(play) == 'p'){
                        printf("HAH!!!\n");
                        Sleep(1500);
                        printf("Scissors beats Paper! I win!\n");

                        computer+=1;
                        round+=1;

                        updateScore(&player, &computer, name); //& needed to get the updated scores

                    }

                    else if(tolower(play) == 's'){
                        printf("EHH?!\n");
                        Sleep(1500);
                        printf("A TIE!\n");
                        Sleep(1500);

                        round+=1;

                        updateScore(&player, &computer, name);

                    }

                    else if(tolower(play) == 'r'){
                        printf("DARN IT!!\n");
                        Sleep(1500);
                        printf("Rock beats scissors! You win :(\n");
                        Sleep(1500);

                        player+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

            }

            else if(randomNum == 2){
                printf("PAPER!");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");

                    if(tolower(play) == 'r'){
                        printf("HAH!!!\n");
                        Sleep(1500);
                        printf("Paper beats rock! I win!\n");
                        Sleep(1500);

                        computer+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    else if(tolower(play) == 'p'){
                        printf("EHH?!\n");
                        Sleep(1500);
                        printf("A TIE!\n");
                        Sleep(1500);

                        round+=1;

                        updateScore(&player, &computer, name);

                    }

                    else if(tolower(play) == 's'){
                        printf("DARN IT!!\n");
                        Sleep(1500);
                        printf("Scissors beats Paper! You win :(\n");

                        player+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

            }

            else if(randomNum == 3){
                printf("ROCK!");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");
                Sleep(750);
                printf(".");

                    if(tolower(play) == 's'){
                        printf("HAH!!!\n");
                        Sleep(1500);
                        printf("Rock beats scissors! I win!\n");
                        Sleep(1500);

                        computer+=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

                    else if(tolower(play) == 'r'){
                        printf("EHH?!\n");
                        Sleep(1500);
                        printf("A TIE!\n");
                        Sleep(1500);

                        round+=1;

                        updateScore(&player, &computer, name);

                    }

                    else if(tolower(play) == 'p'){
                        printf("DARN IT!!\n");
                        Sleep(1500);
                        printf("Paper beats Rock! You win :(\n");

                        player +=1;
                        round+=1;

                        updateScore(&player, &computer, name);
                    }

            }

            if (player >= games || computer >= games) {
                break;
            }

            printf("GET READY!!\n");
            Sleep(1500);
            printf("\nROUND %d!\n", round);
            Sleep(1500);
            printf("ROCK ");
            Sleep(1000);
            printf("PAPER ");
            Sleep(1000);
            printf("SCISSOR ");
            Sleep(1000);
            printf("SHOOT!\n");
            printf("Enter your play: ");
            scanf(" %c", &play);

            if(InvalidPlay(play)){

                for(int i = 0; i < 5;i++){

                    printf("\nYou have not entered a valid play\n");
                    Sleep(1500);
                    printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                    scanf(" %c", &play);
                    play = tolower(play);

                    if(CheckPlay(play)){
                        break;
                    }

                    else if(i == 4){
                        GetOut();
                    }

                }

            }
        
        }while(CheckPlay(play));

    }

    if(gamemode == 3){

        do{

            int Randomx = (rand()% (max - min + 1)) + min;
            int Randomy = (rand()% (max - min + 1)) + min;
            int Randomz = (rand()% 2) + min;

            clear_input_buffer();
            printf("ROUND %d!!\n", round);
            Sleep(1500);
            printf("ROCK ");
            Sleep(1000);
            printf("PAPER ");
            Sleep(1000);
            printf("SCISSOR ");
            Sleep(1000);
            printf("SHOOT!\n");
            printf("Enter your first hand: ");
            scanf(" %c", &play);

            if(InvalidPlay(play)){

                    for(int i = 0; i < 5;i++){

                        printf("\nYou have not entered a valid play\n");
                        Sleep(1500);
                        printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                        scanf(" %c", &play);
                        play = tolower(play);

                        if(CheckPlay(play)){
                            break;
                        }

                        else if(i == 4){
                            GetOut();
                        }

                    }

                }
            
            printf("Enter you second hand: ");
            scanf(" %c", &play2);

            if(InvalidPlay(play2)){

                    for(int i = 0; i < 5;i++){

                        printf("\nYou have not entered a valid play\n");
                        Sleep(1500);
                        printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                        scanf(" %c", &play2);
                        play2 = tolower(play2);

                        if(CheckPlay(play2)){
                            break;
                        }

                        else if(i == 4){
                            GetOut();
                        }

                    }

                }

            Sleep(1500);
            printf("Computer played: ");

            if(Randomx == 1){
                printf("Scissors, ");
            }

            else if(Randomx == 2){
                printf("Paper, ");
            }

            else if(Randomx == 3){
                printf("Rock, ");
            }

            if(Randomy == 1){
                printf("Scissors");
            }
            else if(Randomy == 2){
                printf("Paper");
            }
            else if(Randomy == 3){
                printf("Rock");
            }

            Sleep(2000);
            printf("\nWhat will be your play: '%c' or '%c': ",play,play2);
            scanf(" %c", &play3);

            if(play3 != play && play3 != play2){

                    for(int i = 0; i < 5;i++){

                        printf("\nYou have not entered a valid play\n");
                        Sleep(1500);
                        printf("What will be your play: '%c' or '%c': ",play,play2);
                        scanf(" %c", &play3);
                        play3 = tolower(play3);

                        if(CheckPlay(play3)){
                            break;
                        }

                        else if(i == 4){
                            GetOut();
                        }

                    }

                }

                    if(Randomz == 1){

                        if(Randomx == 1){
                            printf("Computer Played Scissors.");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");

                                if(tolower(play3) == 'p'){
                                    printf("HAH!!!\n");
                                    Sleep(1500);
                                    printf("Scissors beats Paper! I win!\n");

                                    computer+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 's'){
                                    printf("EHH?!\n");
                                    Sleep(1500);
                                    printf("A TIE!\n");
                                    Sleep(1500);

                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 'r'){
                                    printf("DARN IT!!\n");
                                    Sleep(1500);
                                    printf("Rock beats scissors! You win :(\n");
                                    Sleep(1500);

                                    player+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                printf("\nWould you like to play more (Y/N): ");
                                scanf(" %c",&choice);

                                if(Invalid(choice)){

                                    InvalidMessage(&choice);

                                }
                        }

                        else if(Randomx == 2){
                            printf("Computer Played Paper.");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");

                                if(tolower(play3) == 'r'){
                                    printf("HAH!!!\n");
                                    Sleep(1500);
                                    printf("Paper beats rock! I win!\n");
                                    Sleep(1500);

                                    computer+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                else if(tolower(play3) == 'p'){
                                    printf("EHH?!\n");
                                    Sleep(1500);
                                    printf("A TIE!\n");
                                    Sleep(1500);

                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 's'){
                                    printf("DARN IT!!\n");
                                    Sleep(1500);
                                    printf("Scissors beats Paper! You win :(\n");

                                    player+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                printf("\nWould you like to play more (Y/N): ");
                                scanf(" %c",&choice);

                                if(Invalid(choice)){

                                    InvalidMessage(&choice);

                                }
                        }

                        else if(Randomx == 3){
                            printf("Computer played Rock.");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");

                                if(tolower(play3) == 's'){
                                    printf("HAH!!!\n");
                                    Sleep(1500);
                                    printf("Rock beats scissors! I win!\n");
                                    Sleep(1500);

                                    computer+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                else if(tolower(play3) == 'r'){
                                    printf("EHH?!\n");
                                    Sleep(1500);
                                    printf("A TIE!\n");
                                    Sleep(1500);

                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 'p'){
                                    printf("DARN IT!!\n");
                                    Sleep(1500);
                                    printf("Paper beats Rock! You win :(\n");

                                    player +=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                if(Invalid(choice)){

                                    InvalidMessage(&choice);

                                }

                                printf("\nWould you like to play more (Y/N): ");
                                scanf(" %c",&choice);
                            }
                    }

                    if(Randomz == 2){

                        if(Randomy == 1){
                            printf("Computer Played Scissors.");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");

                                if(tolower(play3) == 'p'){
                                    printf("HAH!!!\n");
                                    Sleep(1500);
                                    printf("Scissors beats Paper! I win!\n");

                                    computer+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 's'){
                                    printf("EHH?!\n");
                                    Sleep(1500);
                                    printf("A TIE!\n");
                                    Sleep(1500);

                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 'r'){
                                    printf("DARN IT!!\n");
                                    Sleep(1500);
                                    printf("Rock beats scissors! You win :(\n");
                                    Sleep(1500);

                                    player+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                printf("\nWould you like to play more (Y/N): ");
                                scanf(" %c",&choice);

                                if(Invalid(choice)){

                                    InvalidMessage(&choice);

                                }
                        }

                        else if(Randomy == 2){
                            printf("Computer Played Paper.");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");

                                if(tolower(play3) == 'r'){
                                    printf("HAH!!!\n");
                                    Sleep(1500);
                                    printf("Paper beats rock! I win!\n");
                                    Sleep(1500);

                                    computer+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                else if(tolower(play3) == 'p'){
                                    printf("EHH?!\n");
                                    Sleep(1500);
                                    printf("A TIE!\n");
                                    Sleep(1500);

                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 's'){
                                    printf("DARN IT!!\n");
                                    Sleep(1500);
                                    printf("Scissors beats Paper! You win :(\n");

                                    player+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                printf("\nWould you like to play more (Y/N): ");
                                scanf(" %c",&choice);

                                if(Invalid(choice)){

                                    InvalidMessage(&choice);

                                }
                        }

                        else if(Randomy == 3){
                            printf("Computer played Rock.");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");
                            Sleep(750);
                            printf(".");

                                if(tolower(play3) == 's'){
                                    printf("HAH!!!\n");
                                    Sleep(1500);
                                    printf("Rock beats scissors! I win!\n");
                                    Sleep(1500);

                                    computer+=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                else if(tolower(play3) == 'r'){
                                    printf("EHH?!\n");
                                    Sleep(1500);
                                    printf("A TIE!\n");
                                    Sleep(1500);

                                    round+=1;

                                    updateScore(&player, &computer, name);

                                }

                                else if(tolower(play3) == 'p'){
                                    printf("DARN IT!!\n");
                                    Sleep(1500);
                                    printf("Paper beats Rock! You win :(\n");

                                    player +=1;
                                    round+=1;

                                    updateScore(&player, &computer, name);
                                }

                                if(Invalid(choice)){

                                    InvalidMessage(&choice);

                                }

                                printf("\nWould you like to play more (Y/N): ");
                                scanf(" %c",&choice);
                        }
                    }   

                        if(No(choice)){
                            break;
                        }

        }while(CheckPlay(play) && CheckPlay(play2));
            
    }

    if(gamemode == 4){

        do{

        int Randomx = (rand()% (max - min + 1)) + min;
        int Randomy = (rand()% (max - min + 1)) + min;
        int Randomz = (rand()% 2) + min;

        clear_input_buffer();
        printf("ROUND %d!!\n",round);
        Sleep(1000);
        printf("ROCK ");
        Sleep(1000);
        printf("PAPER ");
        Sleep(1000);
        printf("SCISSOR ");
        Sleep(1000);
        printf("SHOOT!\n");
        printf("Enter your first hand: ");
        scanf(" %c", &play);

        if(InvalidPlay(play)){

                for(int i = 0; i < 5;i++){

                    printf("\nYou have not entered a valid play\n");
                    Sleep(1500);
                    printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                    scanf(" %c", &play);
                    play = tolower(play);

                    if(CheckPlay(play)){
                        break;
                    }

                    else if(i == 4){
                        GetOut();
                    }

                }

            }
        
        printf("Enter you second hand: ");
        scanf(" %c", &play2);

        if(InvalidPlay(play2)){

                for(int i = 0; i < 5;i++){

                    printf("\nYou have not entered a valid play\n");
                    Sleep(1500);
                    printf("Please type 'R' for rock, 'S' for scissors, and 'P' for paper: ");
                    scanf(" %c", &play2);
                    play2 = tolower(play2);

                    if(CheckPlay(play2)){
                        break;
                    }

                    else if(i == 4){
                        GetOut();
                    }

                }

            }

        Sleep(1500);
        printf("Computer played: ");

        if(Randomx == 1){
            printf("Scissors, ");
        }

        else if(Randomx == 2){
            printf("Paper, ");
        }

        else if(Randomx == 3){
            printf("Rock, ");
        }

        if(Randomy == 1){
            printf("Scissors");
        }
        else if(Randomy == 2){
            printf("Paper");
        }
        else if(Randomy == 3){
            printf("Rock");
        }

        Sleep(2000);
        printf("\nWhat will be your play: '%c' or '%c': ",play,play2);
        scanf(" %c", &play3);

        if(play3 != play && play3 != play2){

                for(int i = 0; i < 5;i++){

                    printf("\nYou have not entered a valid play\n");
                    Sleep(1500);
                    printf("What will be your play: '%c' or '%c': ",play,play2);
                    scanf(" %c", &play3);
                    play3 = tolower(play3);

                    if(CheckPlay(play3)){
                        break;
                    }

                    else if(i == 4){
                        GetOut();
                    }

                }

            }

                if(Randomz == 1){

                    if(Randomx == 1){
                        printf("Computer Played Scissors.");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");

                            if(tolower(play3) == 'p'){
                                printf("HAH!!!\n");
                                Sleep(1500);
                                printf("Scissors beats Paper! I win!\n");

                                computer+=1;
                                round+=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 's'){
                                printf("EHH?!\n");
                                Sleep(1500);
                                printf("A TIE!\n");
                                Sleep(1500);

                                round+=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 'r'){
                                printf("DARN IT!!\n");
                                Sleep(1500);
                                printf("Rock beats scissors! You win :(\n");
                                Sleep(1500);

                                player+=1;
                                round+=1;

                                updateScore(&player, &computer, name);
                            }

                    }

                    else if(Randomx == 2){
                        printf("Computer Played Paper.");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");

                            if(tolower(play3) == 'r'){
                                printf("HAH!!!\n");
                                Sleep(1500);
                                printf("Paper beats rock! I win!\n");
                                Sleep(1500);

                                computer+=1;
                                round+=1;

                                updateScore(&player, &computer, name);
                            }

                            else if(tolower(play3) == 'p'){
                                printf("EHH?!\n");
                                Sleep(1500);
                                printf("A TIE!\n");
                                Sleep(1500);

                                round+=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 's'){
                                printf("DARN IT!!\n");
                                Sleep(1500);
                                printf("Scissors beats Paper! You win :(\n");

                                player+=1;
                                round+=1;

                                updateScore(&player, &computer, name);
                            }

                    }

                    else if(Randomx == 3){
                        printf("Computer played Rock.");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");

                            if(tolower(play3) == 's'){
                                printf("HAH!!!\n");
                                Sleep(1500);
                                printf("Rock beats scissors! I win!\n");
                                Sleep(1500);

                                computer+=1;
                                round+=1;

                                updateScore(&player, &computer, name);
                            }

                            else if(tolower(play3) == 'r'){
                                printf("EHH?!\n");
                                Sleep(1500);
                                printf("A TIE!\n");
                                Sleep(1500);

                                round+=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 'p'){
                                printf("DARN IT!!\n");
                                Sleep(1500);
                                printf("Paper beats Rock! You win :(\n");

                                player +=1;
                                round+=1;

                                updateScore(&player, &computer, name);
                            }

                        }

                }

                if(Randomz == 2){

                    if(Randomy == 1){
                        printf("Computer Played Scissors.");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");

                            if(tolower(play3) == 'p'){
                                printf("HAH!!!\n");
                                Sleep(1500);
                                printf("Scissors beats Paper! I win!\n");

                                computer+=1;
                                round  +=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 's'){
                                printf("EHH?!\n");
                                Sleep(1500);
                                printf("A TIE!\n");
                                Sleep(1500);

                                round  +=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 'r'){
                                printf("DARN IT!!\n");
                                Sleep(1500);
                                printf("Rock beats scissors! You win :(\n");
                                Sleep(1500);

                                player+=1;
                                round  +=1;

                                updateScore(&player, &computer, name);
                            }

                    }

                    else if(Randomy == 2){
                        printf("Computer Played Paper.");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");

                            if(tolower(play3) == 'r'){
                                printf("HAH!!!\n");
                                Sleep(1500);
                                printf("Paper beats rock! I win!\n");
                                Sleep(1500);

                                computer+=1;
                                round  +=1;

                                updateScore(&player, &computer, name);
                            }

                            else if(tolower(play3) == 'p'){
                                printf("EHH?!\n");
                                Sleep(1500);
                                printf("A TIE!\n");
                                Sleep(1500);

                                round  +=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 's'){
                                printf("DARN IT!!\n");
                                Sleep(1500);
                                printf("Scissors beats Paper! You win :(\n");

                                player +=1;
                                round +=1;

                                updateScore(&player, &computer, name);
                            }

                    }

                    else if(Randomy == 3){
                        printf("Computer played Rock.");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");
                        Sleep(750);
                        printf(".");

                            if(tolower(play3) == 's'){
                                printf("HAH!!!\n");
                                Sleep(1500);
                                printf("Rock beats scissors! I win!\n");
                                Sleep(1500);

                                computer+=1;
                                round  +=1;

                                updateScore(&player, &computer, name);
                            }

                            else if(tolower(play3) == 'r'){
                                printf("EHH?!\n");
                                Sleep(1500);
                                printf("A TIE!\n");
                                Sleep(1500);

                                round  +=1;

                                updateScore(&player, &computer, name);

                            }

                            else if(tolower(play3) == 'p'){
                                printf("DARN IT!!\n");
                                Sleep(1500);
                                printf("Paper beats Rock! You win :(\n");

                                player +=1;
                                round  +=1;

                                updateScore(&player, &computer, name);
                            }

                    }

                }

                    if (player >= games || computer >= games) {
                    break;
                    }

        }while(CheckPlay(play) && CheckPlay(play2));

    }

    if(player > computer){
        printf("\nCongratulations!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        printf("\nChallenger %s has beaten Computer in a Rock Paper Scissor game!\n", name);
        Sleep(1500);

        if(gamemode == 1){
            printf("Gamemode: First to _, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n", round);
        }

        else if(gamemode == 2){
            printf("Gamemode: Endless, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n", round);
        }

        else if(gamemode == 3){
            printf("Gamemode: Dual Hand Endless, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n", round);
        }
        
        else if(gamemode == 4){
            printf("Gamemode: Dual Hand First to _, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }
        
        Sleep(2000);
        printf("With the final tally being: ");
        updateScore(&player, &computer, name);
        Sleep(1500);
        printf("\nThank you for playing!");
    }

    if(computer > player){
        printf("\nYou just lost to a fucking computer!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        printf("\nGet fucking sent! Stinky challenger %s!", name);

        if(gamemode == 1){
            printf("Gamemode: First to _, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }

        else if(gamemode == 2){
            printf("Gamemode: Endless, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }

        else if(gamemode == 3){
            printf("Gamemode: Dual Hand Endless, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }
        
        else if(gamemode == 4){
            printf("Gamemode: Dual Hand First to _, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }

        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!\n");
        Sleep(2000);
        printf("The final score is: ");
        updateScore(&player, &computer, name);
        Sleep(1500);
        printf("\nGET BETTER!!!");

    }

    if(computer == player){

        printf("\nWHATT!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        Sleep(1000);
        printf("!");
        printf("\nYou really decided to stop at a tie %s!", name);
        Sleep(1000);
        printf(" BROTHER");
        Sleep(1000);

        if(gamemode == 1){
            printf("Gamemode: First to _, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }

        else if(gamemode == 2){
            printf("Gamemode: Endless, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }

        else if(gamemode == 3){
            printf("Gamemode: Dual Hand Endless, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }
        
        else if(gamemode == 4){
            printf("Gamemode: Dual Hand First to _, ");
            Sleep(1500);
            printf("and a total of %d round/s!\n",round);
        }

        Sleep(1500);
        printf("\n The final score is: ");
        updateScore(&player, &computer, name);
        Sleep(1500);
        printf("\nTSK");

    }

}

void Max(){

    printf("\nYou've attempted to many tries!\n");
    Sleep(2000);
    printf("Terminating the application in ");
    Sleep(1000);
    printf("5");
    Sleep(1000);
    printf(" 4");
    Sleep(1000);
    printf(" 3");
    Sleep(1000);
    printf(" 2");
    Sleep(1000);
    printf(" 1");
    exit (0);
}

void GetOut(){

    printf("\nThe system has detected user is too dumb to comprehend simple instructions!\n");
    Sleep(2000);
    printf("Terminating the application in ");
    Sleep(1000);
    printf("5");
    Sleep(1000);
    printf(" 4");
    Sleep(1000);
    printf(" 3");
    Sleep(1000);
    printf(" 2");
    Sleep(1000);
    printf(" 1");
    exit (0);
}

int Invalid(char choice){
    char lower = tolower(choice); // tolower makes any character in 'choice' to lowercase
    return (lower != 'y' && lower != 'n'); 
    //if you use || instead it wont work.
}

int No(char choice){
    char lower = tolower(choice);
    return (choice == 'n');
}

int GameMode1(){
    int games;
    printf("\nYou have chosen First to _, ");
    Sleep(1500);
    printf("Enter the amount of points you'd like to play to: ");

    if(scanf("%d", &games) != 1 || games < 1){

        for(int i = 0; i < 5; i++){

            printf("Invalid Answer!\n");

            while(getchar() != '\n');

            Sleep(1500);
            printf("Enter the amount of points you'd like to play to: ");

            if(scanf("%d", &games) == 1 && games >= 1){
                break;
            }

            if(i == 4){
                GetOut();
            }
        }
    }

    Sleep(1500);
    printf("\n");

    return games;
}

void GameMode2(){
    printf("\nYou have chosen 'Endless',");
    Sleep(1500);
    printf("play to your hearts content and choose to stop anytime!\n");
    Sleep(1500);
}

void GameMode3(){
    printf("\nYou have chosen 'Dual Hand Endless',");
    Sleep(1500);
    printf("An Endless gamemode where you can play 2 hands at the same time!\n");
    Sleep(1500);
    printf("In the End the Computers hand is also revealed. ");
    Sleep(2000);
    printf("By then you can choose which hand of yours you want to play.\n");
    Sleep(2000);
    printf("And the computer will choose one as well!\n");
}


int GameMode4(){
    int games;
    printf("\nYou have chosen 'Dual Hand, First to _',");
    Sleep(1500);
    printf("A 'first to _' gamemode where you can play 2 hands at the same time!\n");
    Sleep(1500);
    printf("In the End the Computers hand is also revealed. ");
    Sleep(2000);
    printf("By then you can choose which hand of yours you want to play.\n");
    Sleep(2000);
    printf("And the computer will choose one as well!\n");
    Sleep(2000);

    printf("\nSince you have chosen First to _, ");
    Sleep(1500);
    printf("Enter the amount of points you'd like to play up to: ");

    if(scanf("%d", &games) != 1 || games < 1){

        for(int i = 0; i < 5; i++){

            printf("Invalid Answer!\n");

            while(getchar() != '\n');

            Sleep(1500);
            printf("Enter the amount of points you'd like to play up to: ");

            if(scanf("%d", &games) == 1 && games >= 1){
                break;
            }

            if(i == 4){
                GetOut();
            }
        }
    
    }

    return games;
}

void GameMode3Ex(){

    printf("\nExample.");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(1500);
    printf("\nYou have chosen: Rock and Scissors\n");
    Sleep(2000);
    printf("The Computer has chosen to play: Paper and Paper");
    Sleep(2000);
    printf("\nYou have to pick between Rock and Scissors\n");
    Sleep(2000);
    printf("The Computer has to pick between Paper and Paper\n");
    Sleep(2000);
    printf("You picked Scissors, The computer picked Paper. You won!");
    Sleep(1500);
    printf(" Now lets get to the rules!\n");
    Sleep(1500);

}

int Yes(char choice){
    char lower = tolower(choice);
    return (choice == 'y');
}

int InvalidGame(int game){
    return (game != 1 || game != 2);
}

int InvalidMessage(char *choice){

    for(int i = 0; i < 5; i++){
        printf("You have not selected a valid choice!\n");
        Sleep(1500);
        printf("\nWould you like to play more (Y/N): ");
        scanf(" %c", choice);

        if(Yes(*choice) || No(*choice)){
            break;
        }

        if(i == 4){
            GetOut();
        }

    }

}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int CheckPlay(char play){
    return (tolower(play) == 'p' || tolower(play) == 's' || tolower(play) == 'r');
}

int InvalidPlay(char play){
    return (tolower(play) != 'p' && tolower(play) != 's' && tolower(play) != 'r');
}

void updateScore(int *player, int *computer, char name[]) {
    printf("\nComputer = %d || Stinky Challenger %s = %d", *computer,name,*player);
    printf("\n");
}  //* allows the program to map out and see where the updated variable is. Using *
   // no return cuz the function is only reading update variables not updating them

