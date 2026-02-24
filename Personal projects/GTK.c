#include <stdio.h>
#include <string.h>

//hey seb in the future. Ts ur second proj made on 2/23/26

int main(){
    
    char name [50] = "";
    int age = 0;
    char color [15] = "";
    float grade = 0.0f;
    char song [50] = "";
    char ready [20] = "";
    float fact = 0.0f;

    printf("Hello there stranger! I am Seb's second ever  interactable project in C, nice to meet you!\n");
    printf("Before getting started, would you mind telling me your name? ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Hey there %s, hows it going! Hope your day is going great :)\n", name);

    printf("As of writing this code I am 17, about 2 months until I turn 18.\n");
    printf("Scary I know. Btw If you dont mind me asking, how old are you? ");
    scanf("%d", &age);

    printf("OHHH ZAMMM UNC, %d!!, I MEAN, you still got some years left at least thats for sure.\n", age);
    printf("I'm thinking of a niche question rn....\n");
    printf("Unfortunately I still dont know any time functions so that seemed instant....\n");
    printf("But hey whats your favorite color? ");
    scanf("%s", &color);

    printf("%s!?!?!! Are you on the spectrum?????\n", color);
    printf("wOaH sorry that slipped out. Mines black right now. after all she just left me heh...\n");

    printf("....ANYWAYS dont mind that.... How are you doing in school? Whats your gpa? ");
    scanf("%f", &grade);
    getchar();

    printf("OH WOW %.2f average!\n", grade);
    printf("But hey no ones perfect... Its okay buddy.\n");
    printf("Yk whats perfect? My favorite song right now!! Which I cant choose... Whats yours tho? ");
    fgets(song, sizeof(song), stdin);

    song[strcspn(song, "\n")] = '\0';

    printf("For once you have redeemed yourself!!! Cuz %s?? thats actually a banger.. for a dumbass like you!\n", song);
    printf("EHEM. Sorry. If I've been so mean, to cheer you up I'll give you a fun fact!\n");
    printf("Are you ready? ");
    fgets(ready, sizeof(ready), stdin);

    ready[strcspn(ready, "\n")] = '\0';

    printf("I have no idea what you said there so I'm assuming, %s, means more of a yes than a no...\n", ready);

    fact = (grade + age) / 2;

    printf("Here it goes!!! %f IS YOU LUCKY NUMBER!!!!\n", fact);
    printf("Playing with ya.. Im just practicing arithmetics and couldn't think of anything else.\n");
    printf("That is literally just your grade + age divided by two mate.\n");
    printf("SO UH this convo has been pretty one sided. I hope youd ask me some questions next time you know\n");
    printf("ADIOSSSS");

    return 0;
}