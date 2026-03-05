#include <stdio.h>
#include <math.h>

int main(){

    int start = 0;
    float kilogram = 0.0;
    float pounds = 0.0;
    
    printf("Weight Conversion Calculator\n");
    printf("To start please type 1 for KG to Pounds. type 2 for Pounds to KG: ");
    scanf("%d", &start);

    if(start == 1){
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilogram);

        pounds = kilogram * 2.2046;

        printf("%.2f in kilograms is equal to %.2f in pounds.", kilogram, pounds);
    }
    else if(start == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);

        kilogram = pounds / 2.2046 ;

        printf("%.2f in pounds is equal to %.2f in kilograms.", pounds, kilogram);
    }
    else{
        printf("You did not select 1 or 2 dumbass, try again!");
        exit (0);
    }

    return 0;
}