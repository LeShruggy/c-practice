#include <Stdio.h>
#include <string.h>
#include <ctype.h> //character checking function
//one of them isalpha() -> Asks; is this character a letter?
//another is; isdigiy() -> Asks; is this character a number?
#include <windows.h>

int CharCheck(char name[]);
int isEmpty(char name[]);
int tooLong(char name[]);
int invalidName(char name[]);
void Rage();
int invalid1(int answer);
int NumCheck(char input[]);
void clear_input_buffer();
int wrongMichael(char michael[]);
int wrongCountry(char country[]);

int main(){

    int score = 128;
    char name[25] = "";
    int answer = 0;
    int answer2 = 0;
    int rows = 0;
    int columns = 0;
    char symbol = '\0';
    char michael[25] = "";
    char country[15] = "";

    printf("Welcome to Seb's IQ quiz!\n");
    Sleep(1500);
    printf("You are here for a reason!");
    Sleep(1500);
    printf("Maybe you're searching for a purpose in life...");
    Sleep(1500);
    printf("Or maybe ure just dumb...\n");
    Sleep(2000);
    printf("OR maybe ure too broke to find an actual IQ quiz!!!!\n");
    Sleep(2000);
    printf("But whatever it is, you're at the right spot!\n");
    Sleep(1500);
    printf("So sit back, and enjoy the quiz!!\n");
    Sleep(1500);
    printf("\nBefore we get started, lets get to know each other!\n");
    printf("You are? ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    for(int i = 0; i < 5 && invalidName(name); i++){ 
        //LOOP while attempts < 5, name is still invalid

        if(invalidName(name)){ 

            //Just add the ||OR function if you got multiple functions to check
        
            if(isEmpty(name)){
                printf("Really? you dont have a name?! Ya cant fool me son\n");
            }
            else if(tooLong(name)){
                printf("I didnt tell you to write to damn essay!\n");
            }
            else if(CharCheck(name)){
                printf("Who are you? A starwars character or sum shi? A damn robot?\n");
            }

            score-=1;

            printf("Pull that shit some more and u getting a negative score!\n");
            printf("Enter yo damn name: ");

            fgets(name,sizeof(name),stdin);
            name[strlen(name) - 1] = '\0';
        }   
    }

    if(invalidName(name)){
        Rage();
    }

    /*CODE EXPLANATION. So first of all we got the for function which will keep on looping everything
    as long as tries is less than 5 AND name is still invalid. After 5 tries the loop is exited, and if
    the name is still invalid, we have the if function that plays out the rage.*/

    printf("\n%s.. Hope we get along well.\n", name);
    Sleep(1000);
    printf("Lets get started then..\n");
    Sleep(1000);
    printf("Question number 1...");
    Sleep(2000);
    printf("What is 9+10: ");
    scanf("%d", &answer);
    
    for(int i = 0; i < 2; i++){

        if (answer == 21){
            break;
        }
        
        if(answer == 19){
            printf("YOURE ABSOLUTELY....");
            Sleep(1500);
            printf("WRONG...\n");
            Sleep(2000);
            printf("19, really? do you not know how to add?\n");
        }

        else{
            printf("How is this so hard for you? Come on man...\n");
            clear_input_buffer();
        }
    
        score -= 1;

        Sleep(1000);
        printf("..Sigh.. Try again.");
        Sleep(1500);
        printf("Whats 9 + 10: ");
        scanf(" %d", &answer);
        clear_input_buffer();
    }

    if(answer != 21){
        printf("Alright man you probably need a hint..");
        Sleep(2000);
        printf("The answer rhymes with tweeny wand..\n");
        Sleep(2000);
        printf("That's all im gonna give you. Thats like too much already\n");
        Sleep(1000);
        printf("So what is it gonna be: ");
        scanf("%d", &answer);

        if(answer != 21){
            Rage();
        }
    }

    printf("WOAHHH YOU ACTUALLY GOT IT!!! AMAZING!\n");
    Sleep(1500);
    printf("You're doing better than the last guy so far! Keep it up!\n");
    Sleep(1000);
    printf("\nNext Question then!\n");
    printf("Whats the next number in the sequence:");
    Sleep(750);
    printf(" 60");
    Sleep(750);
    printf(" 62");
    Sleep(750);
    printf(" 64");
    Sleep(750);
    printf(" 66");
    Sleep(750);
    printf(" __:");
    scanf("%d", &answer2);

    for(int i = 0; i < 2; i++){

        if(answer2 == 67){
            break;
        }

        if(answer2 == 68){
            printf("CORRECT!");
            Sleep(1000);
            printf("....");
            Sleep(1000);
            printf("Hmmmm\n");
            Sleep(1500);
            printf("But thats kind of a boring answer no?\n");
        }

        else{
            printf("ARE WE FR MANN.");
            Sleep(1000);
            printf("Dude. Just like add..\n");
            clear_input_buffer();
        }

        score-=1;

        printf("Try again. next number in this sequence: 60, 62, 64, 66, __: ");
        scanf("%d", &answer2);
        clear_input_buffer();
    }

    if(answer2 != 67){
        score-=1;
        printf("BROOO, THIS YO LAST CHANCE!!!!!!!\n");
        Sleep(1500);
        printf("Its so easy.");
        Sleep(1000);
        printf("You want a hint, really?");
        Sleep(1000);
        printf(" FINE.\n");
        Sleep(2000);
        printf("What comes before 68 and after 66: ");
        scanf("%d", &answer2);
        
        getchar();
        if(answer2 != 67){
            Rage();
        }
        
    }

    printf("\nSIIXXXXXXX ");
    Sleep(1000);
    printf("SEVEEEENNNNN\n");
    Sleep(1500);
    printf("YOU GOT ITTTT LETS GOOO\n");
    Sleep(1500);
    printf("\nNext question! Observe the image below: \n");
    Sleep(1500);
    printf("\n@@@@@@@@\n");
    Sleep(1500);
    printf("@@@@@@@@\n");
    Sleep(1500);
    printf("@@@@@@@@\n");
    Sleep(1500);
    printf("@@@@@@@@\n");
    Sleep(1500);
    printf("\nYour task is simple. Just enter the correct number of rows, columns, and symbols.\n");
    printf("Enter the number of columns: ");
    scanf("%d", &rows); 
    printf("Enter the number of rows: ");
    scanf(" %d", &columns); 
    printf("Enter you symbol: ");
    scanf(" %c", &symbol);


    for(int i = 0; i < 2; i++){

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                printf("%c", symbol); 
            }
            printf("\n");
        }

        if(columns != 8 || rows != 4 || symbol != '@'){
            score-=1;
            printf("\nThat doesnt look quite right...");
            Sleep(1500);
            printf("Try again!\n");
            printf("Enter the number of columns: ");
            scanf("%d", &rows); 
            printf("Enter the number of rows: ");
            scanf(" %d", &columns); 
            printf("Enter you symbol: ");
            scanf(" %c", &symbol);
            }

        else{
            break;
        }
        }
    
    if(columns != 8 || rows != 4 || symbol != '@'){
            score-=1;
            printf("\nOk ure kinda bad at this...");
            Sleep(1000);
            printf("Like really really bad\n");
            Sleep(1000);
            printf("Oh.... I see the problem now....\n");
            Sleep(1500);
            printf("I think I uhhh swapped columns for rows heh...");
            Sleep(1000);
            printf("WOOPS!\n");
            printf("Enter the number of rows: ");
            scanf("%d", &rows); 
            printf("Enter the number of columns: ");
            scanf(" %d", &columns); 
            printf("Enter you symbol: ");
            scanf(" %c", &symbol);

            for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                printf("%c", symbol); 
                }
            printf("\n");
            }
        
            if(columns != 8 || rows != 4 || symbol != '@'){
                Rage();
                }
    }
    
    getchar();
    printf("\nYO YOU ACTUALLY DID IT!!!!\n");
    Sleep(1500);
    printf("There defnitely wasnt an issue there heh...");
    Sleep(1000);
    printf("Alright");
    Sleep(2000);
    printf("\n...Maybe a tiny one.");
    Sleep(1500);
    printf(" ANYWAYS\n");
    Sleep(1500);
    printf("\nNext question! Whats wrong with this bizare sentence:\n");
    printf("Three Michael Jacksons sitting on 4 airplanes, one decided to eat Paprika, and he died.\n");
    printf("Enter the incorrect word: ");
    fgets(michael,sizeof(michael),stdin);
    michael[strlen(michael)-1] = '\0';

    for(int i = 0; i < 2 && wrongMichael; i++){

        if(wrongMichael(michael)){
            score-=1;
            printf("%s... Is quite not right!\n", michael);
            Sleep(1500);
            printf("I mean its such an easy catch, are you this stupid?!\n");
            Sleep(2000);
            printf("\nWhats wrong with this bizare sentence:\n");
            printf("Three Michael Jacksons sitting on 4 airplanes, one decided to eat Paprika, and he died.\n");
            printf("Enter the incorrect word: ");
            fgets(michael,sizeof(michael),stdin);
            michael[strlen(michael)-1] = '\0';
            }
    }

    if(wrongMichael(michael)){
        score-=1;
        printf("FOR THE LAST TIMEEEE.");
        Sleep(1500);
        printf(" Fine, I'll give you a bizarre hint!!");
        Sleep(1000);
        printf(" Maybe use yer eyes!!!!\n");
        Sleep(2000);
        printf("\nWhats wrong with this bizare sentence:\n");
        printf("Three Michael Jacksons sitting on 4 airplanes, one decided to eat Paprika, and he died.\n");
        printf("Enter the incorrect word: ");
        fgets(michael,sizeof(michael),stdin);
        michael[strlen(michael)-1] = '\0';

        if(wrongMichael){
            Rage();
        }

    }

    printf("\nNICE CATCH!\n");
    Sleep(1000);
    printf("\nWOW haha..");
    Sleep(2000);
    printf("I think I was supposed to put the error in the Michael Jackson sentence...");
    Sleep(1000);
    printf(" Whatever!");
    Sleep(1500);
    printf(" LAST QUESTION!!! \n");
    Sleep(1000);
    printf("\nWhich country turns footsteps into electricity? ");
    scanf("%s", &country);

    for(int i = 0; i < 2; i++){

        if(wrongCountry(country)){
        score-=1;
        printf("EVERYONE KNOWS THE ANSWER TO THIS!!! COME ONNN");
        Sleep(2000);
        printf("Did you not do your research broski??");
        Sleep(1500);
        printf("\nWhich country turns footsteps into electricity? ");
        scanf("%s", &country);
        }

    else{
        break;
    }
    }

    if(wrongCountry(country)){
        score-=1;
        printf("BRUHHHH");
        Sleep(1000);
        printf("ONE LAST CHANCE.\n");
        Sleep(1500);
        printf("Hint: Naruto...");
        Sleep(1500);
        printf("No way u still dont know: ");
        scanf("%s", &country);

        if(wrongCountry(country)){
            Rage();
        }
    }

    printf("\nYOU GOT IT RIGHTTTTT\n");
    Sleep(1500);
    printf("AND WITH THAT THE QUIZ HAS COME TO AN END!!\n");
    Sleep(2000);
    printf("Now... Get ready for the final tally...");
    Sleep(1000);
    printf("YOUR IQ IS:");
    Sleep(2500);
    printf("%d!!!!!\n", score);

    if(score >= 120){
        Sleep(1000);
        printf("YOU ARE SUPPPERRRR GIFTED\n");
        Sleep(1500);
        printf("You defnitely have a bright future ahead of you!\n");
        Sleep(1500);
        printf("Keep it up and youll be the next Einstein!\n");
    }

    else if(score>= 115 && score <= 119){
        Sleep(1000);
        printf("A few more points and you would've been considered a MEGA geniuns!\n");
        Sleep(1500);
        printf("TOO BAD! You arent that gifted lol...\n");
        Sleep(1500);
        printf("Nonetheless a decent score. Goodjob!\n");
    }

    else if(score >= 112 && score <= 114){
        Sleep(1000);
        printf("HOLY SHIT! You are barely hanging by....\n");
        Sleep(1500);
        printf("At least you arent the worst!\n");
        Sleep(1500);
        printf("No Goodjob for you! Just get better lol\n");
    }

    else{
        Sleep(1000);
        printf("Imma keep this straight to the point...\n");
        Sleep(1500);
        printf("YOU ARE THE WORST OF THE WORST!!!!\n");
        Sleep(1500);
        printf("Holy shit, go back to 1st grade or sum man.\n");
        Sleep(2000);
        printf("Or maybe even a fets again, ionknow.\n");
    }

    printf("\nThanks for playing!!\n");
    Sleep(1500);
    printf("\nHope you liked your results!, if you didnt get better!!!!!");
    Sleep(1500);
    printf("BYE!");
}

int CharCheck(char name[]){
    int i = 0; //i tells us which letter we're checking. we start at 0. so i=0

    //in the case of J O H N /0
    //          i =  0 1 2 3 4

    while(name[i] != '\0'){ //keep on checking till \0, which is the end of the word
        //IN C STRINGS END WITH A NULL '\0' CHARACTER
        if(!isalpha(name[i])){  //if something in i is a number. 
            //isalpha checks if a charac is a letter. Because of the ! before the charac it checks if its a number logically and returns true if so
            return 1;   // I have detected a number, theres something invalid. we go back.
        }
        i++; //means i=i+1. So we move forward. Move to the next character
    }

    return 0; // all characters are letters
    //in bools arent 1=true, 0=false? yea. But we're checking if something is INVALID here. so true means theres an error
    //return 1= Theres an invalid charac
    //return 0= aight all good
}

int isEmpty(char name[]){
    return (strlen(name) == 0);
}

int tooLong(char name[]){
    return (strlen(name) >= 15);
}

int invalidName(char name[]){
    return isEmpty(name) || tooLong(name) || CharCheck(name);
} //function inside other functions woahhh

void Rage(){ 
    //reason w hy void is used because this function gives nothing back. no input. just sending.
    printf("THATS IT, URE TOO STUPID TO TAHE THIS QUIZ!!!!!\n");
    Sleep(2000);
    printf("RRRRRR\n");
    Sleep(2000);
    printf("HRGHHHH\n");
    Sleep(2000);
    printf("GET OUT!!\n");
    exit(0);
    //no need for a return value if u arent giving anything back
}

void clear_input_buffer() { //CLEARS INPUT BUFFER(throws the new line away)
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int wrongMichael(char michael[]) {
    //If it's NOT "bizare" AND it's NOT "bizarre", return true (it's wrong)
    if (strcmp(michael, "bizare") != 0 && strcmp(michael, "bizarre") != 0) {
        return 1; // It is wrong
    }
    return 0; // It is correct
}

int wrongCountry(char country[]){
    if (strcmp(country, "Japan") != 0 && strcmp(country, "japan") != 0 && strcmp(country, "JAPAN") != 0) {
        return 1;
    }
    return 0;
}