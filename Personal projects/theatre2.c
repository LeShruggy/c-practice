#include <stdio.h>
#include <stdlib.h>

int amountCheck(int amount){
    return(amount >= 1);
    }
    
int validChoice(int choice){
    return(choice >= 1 && choice <= 4);
    }    

char validChoice2(char choice1){
    return(choice1 == 'Y' || choice1 == 'y' ||choice1 == 'N' ||choice1 == 'n');
    }

int main(){

    int poo = 50;
    int pee = 25;
    int toilet = 160;
    int paper = 40;
    int amount = 0;
    int choice = 0;
    float price = 0.0;
    char choice1 = '\0';

    printf("Welcome to Poopy mart. What would you like to purchase\n");
    printf("1. Pee           |  $25.00\n");
    printf("2. Toilet paper  |  $40.00\n");
    printf("3. Poo           |  $50.00\n");
    printf("4. Toilet        |  $160.00\n");
    printf("Enter the number to the corresponding choice: ");
    scanf("%d", &choice);
    
    if(validChoice(choice)){
        switch(choice){
        
            case 1:
                printf("Enter amount of pee/s: ");
                scanf("%d", &amount);
            
                if (amountCheck(amount)){
                    price = (amount * pee); 
                    }
                else{
                    printf("Invalid amount");
                    }
            break;   
            
            case 2:
                printf("Enter amount of toilet paper/s: ");
                scanf("%d", &amount);
            
                if (amountCheck(amount)){
                    price = (amount * paper); 
                    }
                else{
                    printf("Invalid amount");
                    }
            break;
            
            case 3:
                printf("Enter amount of poo/s: ");
                scanf("%d", &amount);
            
                if (amountCheck(amount)){
                    price = (amount * poo);
                    }
                else{
                    printf("Invalid amount");
                    }
            break; 
            
            case 4:
                printf("Enter amount of Toilet/s: ");
                scanf("%d", &amount);
            
                if (amountCheck(amount)){
                    price = (amount * toilet); 
                    }
                else{
                    printf("Invalid amount");
                    }
            break;
        }
    }    
    else{
        printf("Vhat d fak");    
    }
    
    printf("\nYour total amount is %.2f$!\n",price);
    printf("We're actually giving out discounts to special people\n");
    printf("Are you sick in the head (Y/N): ");
    scanf(" %c", &choice1);
    
    if(validChoice2(choice1)){
        switch(choice1){
        
            case 'Y':
            case 'y':
                printf("You better not be lying, cuz we r losing a lotta money here men..\n");
                printf("1. Diarrhea          |  5percent \n");
                printf("2. Hemorrhoids       |  10percent\n");
                printf("3. There's a worm    |  15percent\n");
                printf("4. Obesity           |  50percent\n");
                printf("Enter the number/s to the corresponding choice: ");
                scanf("%d", &choice);
                
                if(validChoice(choice)){
                    switch(choice){
                    
                        case 1:
                            printf("Poor Tum Tum :<\n");
                            price*=0.95;
                        break;
                        
                        case 2:
                            printf("How'd u even get that lmao\n");
                            price*=0.90;
                        break;
                        
                        case 3:
                            printf("Bruh pregnant w a worm\n");
                            price*=0.85;
                        break;
                        
                        case 4:
                            printf("Do ya js shit more or something?\n");
                            price*=0.50;
                        break;
                    }
                }    
                else{
                printf("Alright then no discount :,<\n");
                }
            break;
            
            case 'N':
            case 'n':
                printf("Alr no discount I guess :,<\n");
            break;    
        }  
    }    
    else{
        printf("Couldn't understand u there buddy");
        exit (0);     
    } 
    
    printf("Thanks for shopping at Poopy mart :)\n");
    printf("Yer grand total is %.2f! Come again another timeee",price);
}