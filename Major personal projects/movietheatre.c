#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h> //allows you to convert user input to lower and uppercase

int main(){
    
    char choice = '\0';
    char choice2 = '\0';
    int choice3 = 0;
    char choice4 = '\0';
    int choice5 = 0;
    char choice6 = '\0';
    char choice7 = '\0';
    int choice8 = 0;
    char name[50] = "";
    char movie[50] = "";
    char seat[3] = "";
    float price = 0.0f;
    float price1 = 350.00;
    float price2 = 300.00;
    float price3 = 250.00;
    float soda = 50;
    float popcorn = 100;
    int IMAX = 100;
    float amount = 0.0;
    int amount2 = 0.0;
    int amount3 = 0.0;

    
    printf("Hello and welcome to the Bazinga Movie Theatre!\n");
    printf("Today is March 1, 2026. Movies currently in show are the following: \n");
    printf("\n1. Hoppers     |    P350.00\n");
    printf("2. Iron Lung   |    P300.00\n");
    printf("3. Goat        |    P250.00\n");
    printf("\nWould you like to proceed (Y/N)? ");
    scanf(" %c", &choice);
    getchar();
    
    switch(choice){
        case 'Y':
             printf("Awesome! Please proceed to the following steps!\n");
             break;
        case 'N':
             printf("WHY WOULD YOU COME HERE IN THE FIRST PLACE!!!!");
             exit (0);
             break;
        default:
             printf("Sorry I couldn't understand you there. Please type in Y or N.");
             exit (0);
             break;
    }
    
    
    printf("\nPlease type in the name of the movie you'd like to watch: ");
    fgets(movie, sizeof(movie),stdin);

    movie[strlen(movie) - 1] = '\0';
    
    for(int i = 0; movie[i] != '\0'; i++){
    movie[i] = tolower(movie[i]);
    } //this makes it so that whatever the user types in becomes lowercase. so any version of a movie name will be accepted.

    if(strcmp(movie, "hoppers") == 0){//for the code above to work make sure the name "hopper" is in lowercase as well
        printf("Amazing Choice! A funny and comedic cartoon that delivers a deep message to its viewers!\n");
        printf("That would be P350.00 for one ticket\n");
        price+=price1;
    }
    else if(strcmp(movie, "iron lung") == 0){
        printf("A slow burner horror movie by the Youtuber Markiplier, not a bad pick!\n");
        printf("That would be P300.00 for one ticket\n");
        price+=price2;
    }
    else if(strcmp(movie, "goat") == 0){
        printf("An animated sport movie featuring well known voices both in the Acting and Basketball Industry, this is going to be a fun watch!\n");
        printf("That would be P250.00 for one ticket\n");
        price+=price3;
    }
    else{
        printf("Sorry that is not available today! Please see the list of movies again.");
        exit (0);
    }
    
    printf("\nWould you like to add more tickets (Y/N)? ");
    scanf("%c", &choice2);

    switch(choice2){
        case 'Y':
            printf("MORE MONEY?! How many tickets would that be: ");
            scanf("%f", &amount);

            if(amount <= 0){
                printf("Are you trying to scam this Humble Business!!! GET OUT SCUM! You really think I'd let you get this for free??");
                exit (0);
            }
            else if(amount == 1){
                printf("Aw man you couldnt just bring at least like  3 or 4 more? The more the merrier I guess..\n");
                price+=price;
                printf("Your new total is: %.2f\n", price);
            }
            else if(amount >= 2){
                printf("A WHOLE CASH GRAB- I MEAN FAMILY?! WOW!!!\n");
                price = (price * amount) + price;
                printf("Your new total is: %.2f\n", price);
            }
            break;
        case 'N':
             printf("What a LONEERRRR...Ehem...\n");
             printf("I mean if ya wanna watch a movie alone...Maybe....Watch it from your phone or something...Anyways...\n");
             break;
        default:
             printf("You never really learn your lesson do you? I dont know loops yet!!! You go back from the top!!!");
             exit (0);
             break;
    }

    printf("\nIn which cinema would you like to view this movie in?\n");
    printf("1. Normal Theatre | +0.00\n");
    printf("2. IMAX Theatre   | +100.00e/ticket\n");
    printf("Enter the number corresponding to the choice: ");
    scanf("%d", &choice3);

    switch(choice3){
        case 1:
             printf("\nWhat a boring ass person! Why not spend more money!!! Whatever.\n");
             break;
        case 2:
             printf("\nYES YES SPEND MORE MONEY!!!\n");
             price = (IMAX * amount) + price + 100;
             printf("Your new total is %f", price);
             break;
        default:
             printf("I dont know loops yet man, you had one job buddy. 1 or 2.");
             exit (0);
             break;
    }

    printf("\nWould you like to pair those up with our refresheners? We got Popcorn and Soda's available (Y/N): ");
    scanf(" %c", &choice4);

    switch(choice4){
        case 'Y':
             printf("YUMMM MORE MONEY TO USS, EVEN OUR FOOD IS OVERPRICED MWHAHAHAH!!!\n");
             printf("\n1. Popcorn  |  P100.00\n");
             printf("2. Soda     |  P50.00\n");
             printf("\nEnter the number next to the choice or do 3 if you want both Popcorn and Soda: ");
             scanf("%d", &choice5);

             if(choice5 == 1){
                printf("3 wouldve been better but alright.. I'll let is slide.. How many Popcorn's would that be: ");
                scanf("%d", &amount2);

                if(amount2 == 1){
                    price+=popcorn;
                    printf("Really?? ONlY ONE! Your new total is %.2f\n", price);
                }
                else if(amount2 <= 0){
                    printf("Buddy you can't order negative!!!!!!!\n");
                    exit (0);
                }
                else if(amount2 >= 2){
                    price = (popcorn * amount2) + price;
                    printf("OOOO thats something.. Your new total is %.2f\n", price);
                }
                else{
                    printf("You have broken me. This is your fault.");
                    exit(0);
                }
            }  
            else if(choice5 == 2){
                printf("Man you couldnt even get popcorns at least? TSK\n");
                printf("How many soda's would that be: ");
                scanf("%d", &amount2);

                if(amount2 == 1){
                    price+=soda;
                    printf("ONLY ONE SODA ON TOP OF THAT?! How BROKE can your ass be??? Your new total is %.2f\n", price);
                }
                else if(amount2 <= 0){
                    printf("Buddy you can't order negative!!!!!!!\n");
                    exit (0);
                }
                else if(amount2 >= 2){
                    price = (soda * amount2) + price;
                    printf("TSK at least you ordered %d at least.. Your new total is %.2f\n",amount2, price);
                }
                else{
                    printf("You have broken me. This is your fault.");
                    exit(0);
                }
            }
            else if(choice5 == 3){
                printf("BEST OPTION!!! YOURE THE GOAT!!!\n");
                printf("How many Soda's would that be: ");
                scanf("%d", &amount2);

                if(amount2 == 1){
                    price+=soda;
                }
                else if(amount2 <= 0){
                    printf("Buddy you can't order negative!!!!!!!\n");
                    exit (0);
                }
                else if(amount2 >= 2){
                    price = (soda * amount2) + price;
                }
                else{
                    printf("You have broken me. This is your fault.");
                    exit(0);
                }
            
                printf("How many Popcorn's would that be: ");
                scanf("%d", &amount3);

                if(amount3 == 1){
                    price+=popcorn;
                    printf("Are you sure you arent going broke yet? Your new total is %.2f\n!!!!", price);
                }
                else if(amount3 <= 0){
                    printf("Buddy you can't order negative!!!!!!!\n");
                    exit (0);
                }
                else if(amount2 >= 2){
                    price = (popcorn * amount3) + price;
                    printf("MAMA MIA you sure like to spend money! Your new total is %.2f!!!!\n", price);
                }
                else{
                    printf("You have broken me. This is your fault.");
                    exit(0);
                }
            }
            else{
                printf("Buddy I dont know loops, so ure gonna have to start over...goodbye...\n");
                exit (0);
            }
        break;
        case 'N':
             printf("Awwww man... Youre not gonna give us more money?? Whataver psh...\n");
             break;
        default:
             printf("I hate to break it to you but... Ya didnt type in Y or N...idk loops..Off to the start u go.");
             exit (0);
             break;
    }

    printf("\nAs greedy as we are.. Our boss.. Sebastian Aliwanag, is a super great great great person!\n");
    printf("So believe it or not our establishment is offering Senior and Student discounts!\n");
    printf("Do you have any Senior/Students going with you (Y/N)? ");
    scanf(" %c", &choice6);
    
    switch(choice6){
        case 'Y':
        printf("\nNOOOOO come one man. Are you like really sure?? 100percentttt???\n");
        printf("The people youre with. They all seem healthy and adulted and none of them look... old\n");
        printf("Please man, I'd suggest you know, looking at them again....\n");
        printf("Sooo... is it still going to be a yes? (Y/N): ");
        scanf(" %c", &choice7);

             if(choice7 == 'Y'){
                 printf("\nFINEEE FINEEE GEEEZZ\n");
                 printf("You better not be lying... I'm on to you.\n");
                 printf("\n1. Student discount           |   5percent\n");
                 printf("2. Senior discount              |   10percent\n");
                 printf("3. Senior and Student discount  |   13percent\n");
                 printf("4. I made a mistake             |   +1500    \n");
                 printf("\nEnter the number corresponding to the discount: ");
                 scanf("%d", &choice8);

                 if(choice8 == 1){
                    printf("PFFT at least its the lowest one.\n");
                    price = (price * 0.95);
                    printf("There your new total is %.2f. You happy now?\n", price);    
                 }
                 else if(choice8 == 2){
                    printf("Really??? You couldnt just you know pick 4?\n");
                    price = (price * 0.90);
                    printf("There your new total is %.2f. You happy now?\n", price);    
                 }
                 else if(choice8 == 3){
                    printf("WOWWWWWWW YOURE THE GREEDY PIECE OF SHI-\n");
                    price = (price * 0.87);
                    printf("HERE %.2f IS YOUR NEW TOTAL!!!! I hope you're happy now.\n", price);    
                 }
                 else if(choice8 == 4){
                    printf("You my friend. YOURE THE BEST!!!! I KNEW YOU WERE A SAINT!!!\n");
                    price+=1500;
                    printf("THANK YOU SO SO SO SOOO MUCH. Dont woryy about your total: %.2f, I'm sure blessings go both ways.. You'll recover from this\n", price);
                 }
                 else{
                    printf("BUddy you were so close to the finish line, but ya just didnt type in correcntly...From the top!");
                    exit (0);
                 }
            }
            else if(choice7 == 'N'){
                printf("THERE WE GOOO!!! What an honest person you are!!!!\n");
                price+=100;
                printf("Your total is now at %.2f, +a fee for wasting my time there.\n", price);
                printf("I'm sure 100 wont mean that much to you anyways heh.. Thanks!\n");
            }
            else{
                printf("How hard is it to follow instructions? I feel bad at this point. From the start you go!");
                exit (0);
            }
        break;
        
        case 'N':
        printf("YOU MY FRIEND. Deserve an honest trophy!!!\n");
        printf("Thank you for not exploiting our honest honest company.\n");
        printf("Deeply I am so grateful..\n");
        price=-1;
        printf("Your total remains at %.2f, and Oh i deducted 1 peso from that because youre so honest!\n");
        break;

        default:
        printf("I hate to be the bearer of bad news but ya didnt type Y or N there buddy... goodbye...");
        exit (0);
        break;
        }
    
    printf("Thanks for entrusting your Cinema experience to Bazinga Enterprises!\n");
    printf("We hope your experience with '%s' will be filled with enjoyment and pleasure.\n", movie);
    printf("Don't forget to leave a review afterward!\n");
    printf("\nHi owner Seb here. Thanks for using my 2nd project. Ts took me like 3 or maybe 2 hours at least.\n");
    printf("Okay bye hope you had fun watching the movie! You think I was giving you a link to the movie? Hell nah!!!!");
    printf("Second major project 3/1/26");
}