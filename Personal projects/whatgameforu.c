#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    int player = 0;
    int ready = 0;
    char ready2 = '\0';
    char ready3 = '\0';
    int question1 = 0; 
    int question2 = 0; 
    int question3 = 0; 
    int question4 = 0; 
    int question5 = 0; 
    int question6 = 0; 
    int question7 = 0; 
    int question8 = 0; 
    int question9 = 0; 
    int question10 = 0; 
    int result = 0; 

    printf("Hello and welcome to the whatgameisforu questionnaire!\n");
    printf("In this questionnaire you'll answer a series of questions ranging from random personality facts to specific preferences you might have.\n");
    printf("All to determine whatgameisforu! Will that be action? story mode? fps? MOBA? horror? parkour? gatcha? open world? puzzle? SHUT THE FUCK UP\n");
    printf("STOP ASKING QUESTIONS IM SUPPOSED TO ASK THOSE!!1!!!11\n");
    printf("ehem....  Sorryy..heh.. so u down?? type 1 for yes, 2 for no: ");
    scanf("%d", &ready);
    
    if(ready == 1){
        printf("ALRIGHTTT!\n");
    }
    else if(ready == 2){
        printf("I DONT TAKE NO FOR AN ASNWER!!! YOURE STILL GON PLAY!!\n");
    }
    else{
        printf("Follow the instructions dumbass!!!!");
        exit (0);
    }
    
    getchar();
    printf("GREAT! Anyways before that starts, my boss told me to show you this ToS");
    printf("\n===== TOTALLY LEGAL TERMS OF SERVICE =====\n");
    printf("By continuing, you agree to the following:\n");
    printf("1. This quiz may judge you aggressively.\n");
    printf("2. Results may hurt your feelings.\n");
    printf("3. Arguing with the program changes nothing(Seb is too dumb at C to do anything).\n");
    printf("4. The narrator reserves the right to yell.\n");
    printf("5. TO ANSWER ONLY TYPE THE INDICATED NUMBER!!\n");
    printf("\nDo you accept these very serious terms? (Y to agree): ");
    scanf(" %c", &ready2);
    
    if(ready2 == 'Y'){
        printf("BEEET\n");
    }
    else if(ready2 == 'y'){
        printf("...You seriously didnt just capitalized 'y'? you lazy piece of shi-");
        exit (0);
    }
    else{
        printf("NOTICE HOW THERE WAS ONLY Y... Ehem..No getting out of this...\n");
    }
    
    printf("\nFIRST QUESTION! Where are you shitting the hardest?\n");
    printf("1. RGB Japanese Toilet\n");
    printf("2. Foodstand Toilet\n");
    printf("3. Golden Toilet\n");
    printf("4. Skibidi Toilet\n");
    printf("5. Normal boring ass toilet\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question1);  
    
    if(question1 == 1){
        printf("Are you trying to convert shit into electricity?\n");
        player = player + 4;
    }
    else if(question1 == 2){
        printf("Disgusting deplorable human ucks\n");
        player = player + 2;
    }
    else if(question1 == 3){
        printf("Why ruin a gold toilet? you're the real shit here\n");
        player = player + 5;
    }
    else if(question1 == 4){
        printf("Yea man js end it atp\n");
        player = player + 1;
    }
    else if(question1 == 5){
        printf("Boring ass andy over here!!!\n");
        player = player + 3;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }
    
    printf("\nSECOND QUESTION! If you were given the chance to reincarnate, what would you be?\n");
    printf("1. I would pass up the chance and choose to be myself\n");
    printf("2. A main character at an anime\n");
    printf("3. An Animal\n");
    printf("4. I would choose to reincarnate as myself without this feeling of dread, regret, and all the memories I've had\n");
    printf("5. I would choose to reincarnate as a different human\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question2);

    if(question2 == 1){
        printf("Yea sure man no ones that happy in life bro(I'm miserable)\n");
        player = player + 5;
    }
    else if(question2 == 2){
        printf("HAHAHHAHAHAHAHAHAHAHHAHAHAHAHAHHAHAHAHAHHAHAHAHAHAHHAHAHA\n");
        player = player + 1;
    }
    else if(question2 == 3){
        printf("Granted. U prob gon be an ant homie 😂\n");
        player = player + 4;
    }    
    else if(question2 == 4){
        printf("Holy shit man. U good?\n");
        player = player + 2;
    }
    else if(question2 == 5){
        printf("Granted! Black Nigerian Jew living in the slums of South India as the 67th sibling of a hooker!\n");
        player = player + 3;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nTHIRD QUESTION! You were given unlimited credit but only to one specific shop. Which shop would you pick?\n");
    printf("1. Gaming Shop\n");
    printf("2. Jewelry Shop\n");
    printf("3. Book Shop\n");
    printf("4. Grocery Shop\n");
    printf("5. Hardware Shop\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question3);
    
    if(question3 == 1){
        printf("You really have no life, do you?\n");
        player = player + 1;
    }
    else if(question3 == 2){
        printf("Items are not resellable btw, u  aint getting rich bud.\n");
        player = player + 2;
    }
    else if(question3 == 3){
        printf("Knowledge is power??? Could you get any more stupider bro? a book shop deadass\n");
        player = player + 3;
    }
    else if(question3 == 4){
        printf("WOWWWW YOU PICKED THE MOST SENSIBLE ANSWER FOR ONCE WOOOOO\n");
        player = player + 4;
    }
    else if(question3 == 5){
        printf("Bud tryna be Bob the builder?\n");
        player = player + 5;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }
 
    printf("\nFOURTH QUESTION! Oh NO! A zombie apocalypse! Which person are you sticking with?\n");
    printf("1. My Family\n");
    printf("2. My Partner\n");
    printf("3. My Pets\n");
    printf("4. My Friend Group\n");
    printf("5. Im going Solo\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question4);

    if(question4 == 1){
        printf("Goodluck dealing with land disputes bro\n");
        player = player + 3;
    }
    else if(question4 == 2){
        printf("Yea bud idk if condoms are still in production here\n");
        player = player + 5;
    }
    else if(question4 == 3){
        printf("Yea man Max gonna get bitten in no time\n");
        player = player + 4;
    }
    else if(question4 == 4){
        printf("Do you really think people are Loyal in an apocalyptic world?\n");
        player = player + 2;
    }
    else if(question4 == 5){
        printf("WOWW!! WOW DIE WITH PEOPLE WHEN I CAN DIE ALONE!! \n");
        player = player + 1;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nFIFTH QUESTION! If you could master anything, what would it be?\n");
    printf("1. Slaves\n");
    printf("2. An Instrument\n");
    printf("3. A Martial Art\n");
    printf("4. A video game\n");
    printf("5. A Language\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question5);

    if(question5 == 1){
        printf("WOAH WOAH WOAH WOAH PAUSEEEE\n");
        player = player + 2;
    }
    else if(question5 == 2){
        printf("U gon be the next Mozart or sum?\n");
        player = player + 4;
    }
    else if(question5 == 3){
        printf("Are you going to be Master Fingerer????\n");
        player = player + 5;
    }
    else if(question5 == 4){
        printf("Holy shit. You never let me down with these shitty answers\n");
        player = player + 1;
    }
    else if(question5 == 5){
        printf("Bro. Js pick up duolingo man U such a Puta\n");
        player = player + 3;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nSIXTH QUESTION! What are you looking most forward to in life?\n");
    printf("1. The memories I'll make\n");
    printf("2. The new people I'll meet\n");
    printf("3. The places I'll be going to\n");
    printf("4. The opportunities I'll have\n");
    printf("5. The games I'll be able to play\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question6);
    
    if(question6 == 1){
        printf("Cant wait to be in a cubicle facing a compuer huh?\n");
        player = player + 2;
    }
    else if(question6 == 2){
        printf("Are you not content with the people you have now? Im texting your loved ones!!!\n");
        player = player + 3;
    }
    else if(question6 == 3){
        printf("2-3 years to Dagestan u go buddy.\n");
        player = player + 4;
    }
    else if(question6 == 4){
        printf("Lets hope you wont fuck them up like last time!\n");
        player = player + 5;
    }
    else if(question6 == 5){
        printf("There was 4 good options and you managed to pick the shittiest one? what the fuck?\n");
        player = player + 1;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nSEVENTH QUESTION! If you could have one superpower what would it be? (with a secret side effect btw)\n");
    printf("1. Super Strength\n");
    printf("2. Time freeze\n");
    printf("3. Super Speed\n");
    printf("4. Buoyancy\n");
    printf("5. Animal Language\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question7);

    if(question7 == 1){
        printf("You're born as a Nugget with no limbs\n");
        player = player + 2;
    }
    else if(question7 == 2){
        printf("I know what type of person you are.\n");
        player = player + 1;
    }
    else if(question7 == 3){
        printf("You have a 50percent chance of tripping on every step, you trip at light sleep, that shit can behead you btw.\n");
        player = player + 4;
    }
    else if(question7 == 4){
        printf("Yea man what the fuck, you can keep this honestly dont worry about it.\n");
        player = player + 3;
    }
    else if(question7 == 5){
        printf("All the animals ignore you\n");
        player = player + 5;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nEIGHT QUESTION! You're having the best Lunch of your Life. What youtube video are you pairing it up with)\n");
    printf("1. A mukbang video\n");
    printf("2. A minecraft lets play\n");
    printf("3. A MrBeast video\n");
    printf("4. Instagram Reels, TikToks\n");
    printf("5. A documentary/show\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question8);

    if(question8 == 1){
        printf("Are you every greatful in life? The power of greed consumes you\n");
        player = player + 1;
    }
    else if(question8 == 2){
        printf("You know what. Hell yes. You are a great person.\n");
        player = player + 5;
    }
    else if(question8 == 3){
        printf("TODAY IM GAINING 1500 CALORIES I WILL NOT STOP UNTIL I AM A FAT FUCK\n");
        player = player + 4;
    }
    else if(question8 == 4){
        printf("Are you miserable in life? Does your hand itch for this attention 24/7? Ts js sad man\n");
        player = player + 2;
    }
    else if(question8 == 5){
        printf("Are we cooking Meth Jesse?\n");
        player = player + 3;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nNINTH QUESTION! Out of the following, what do you most struggle with?\n");
    printf("1. Commitment\n");
    printf("2. Managing my Emotions\n");
    printf("3. Not taking things personally\n");
    printf("4. Loyalty\n");
    printf("5. Anxiety/Excessive Worrying\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question9);

    if(question9 == 1){
        printf("Why do we believe more in Aliens, rather than Us, the person we see everday\n");
        player = player + 1;
    }
    else if(question9 == 2){
        printf("Hey there son. I hope you're below the age of ten. Cuz man there are better options.\n");
        player = player + 3;
    }
    else if(question9 == 3){
        printf("Its time to talk with our Egos, no?\n");
        player = player + 4;
    }
    else if(question9 == 4){
        printf("Easy! Just enchant yourself with the book in Minecraft :>\n");
        player = player + 5;
    }
    else if(question9 == 5){
        printf("Same man. Ever since my wife Sally cheated on me. Its always been this way man. I'll give you a kiss man.\n");
        player = player + 2;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }

    printf("\nTENTH QUESTION! Its the end of the world. What are you most worried about?\n");
    printf("1. Saying my goodbyes\n");
    printf("2. Not being able to do the things I wanted to do\n");
    printf("3. What happens after death\n");
    printf("4. Leaving everything I've built\n");
    printf("5. When and how will my life end\n");
    printf("Type in the number of your answer: ");
    scanf("%d", &question10);

    if(question10 == 1){
        printf("You gotta hurry then man u aint got that much time left\n");
        player = player + 3;
    }
    else if(question10 == 2){
        printf("Well what are you waiting for? Go do it no?\n");
        player = player + 4;
    }
    else if(question10 == 3){
        printf("Blud worrying about the future. Bfr\n");
        player = player + 1;
    }
    else if(question10 == 4){
        printf("What came from dust. Turns to dust.\n");
        player = player + 5;
    }
    else if(question10 == 5){
        printf("Dw man just bust one out while it happens and it'll all be fine.\n");
        player = player + 2;
    }
    else{
        printf("FOLLOW THE DAMN INSTRUCTIONS!!!!!");
        exit (0);
    }
    
    printf("\nWOW YA FINALLY FINISHED?\n");
    printf("I hope ts was fun for you. NOW are you ready to see ya results (Y/N): ");
    scanf(" %c", &ready3);

    if(ready3 == 'Y'){
        printf("I love the enthusiasm! Here are the results:\n");
    }
    else if(ready3 == 'N'){
        printf("Oh youre so damn lucky I didnt end this cuz u would have to read through all at again. Anyways your results:\n");
    }
    else{
        printf("Did the test give you an aneurysm??? I said Y/N!! I'll let it slide tho.. Here are the results:\n");
    }
    
    result = player;

    if(result >= 50){
        printf("\nYou are classified as 'THE BALANCED'\n");
        printf("You're a person who likes story, depth, and exploration!!! Ya got good taste man. I think this is the best one.\n");
        printf("Game Recommendations:\n");
        printf("The Witcher Series\n");
        printf("Red Dead Redemption Series\n");
        printf("God of War\n");
        printf("Great games! Trust Basti frfr\n");
    }
    else if(result >= 41){
        printf("\nYou are classified as 'THE CLASSIC'\n");
        printf("You dont rlly have a specific a genre, you're js into good and solid games! Ones that dont need to much grind just fulfillment.\n");
        printf("Game Recommendations:\n");
        printf("Minecraft\n");
        printf("Terraria\n");
        printf("Skyrim\n");
        printf("I've personally played most of these, and I lowkey fall into this archetype the most.\n");
    }
    else if(result >= 33){
        printf("\nYou are classified as 'THE HOUSEWIFE'\n");
        printf("Youre into chill games. Well within your comfort zone. Those that give you peace and relaxation.\n");
        printf("Game Recommendations:\n");
        printf("Stardew valley\n");
        printf("The Sims\n");
        printf("Planet Coaster\n");
        printf("I like to play these on a chill day. Great simulator games, that u might like!\n");
    }
    else if(result >= 25){
        printf("\nYou are classified as 'THE MID LIFE CRISIS'\n");
        printf("Youre miserable(not as miserable as the worst type dont worry). You want adrenaline and pain. Mostly pain tho\n");
        printf("Game Recommendations:\n");
        printf("Dark Souls\n");
        printf("DOOM\n");
        printf("Devil May Cry Series\n");
        printf("Single player games that take the grind out of you. Maybe you can project your real life frustrations here bud.\n");
    }
    else if(result >= 17){
        printf("\nYou are classified as 'THE NO LIFER'\n");
        printf("CONGRATULATIONS YOU MANAGED TO GET THE WORST ONE LOL!!!!! I'd suggest changing IMMEDIATELY!!\n");
        printf("Game Recommendations:\n");
        printf("Valorant\n");
        printf("League of Legends\n");
        printf("Overwatch 2\n");
        printf("Go forth and mount up your hours in games that give you no fulfillment. Its what youre into right?\n");

        printf("\nHi its Seb, the maker here ts, took me hours, hope you guys had fun answering and thank you too!\n");
        printf("The dialogue, decisions, questions and answers were all me. Dont be mad at me okay. Bye!!!\n");
        printf("First major project 2/27/26");
    }











}