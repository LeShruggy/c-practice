#include <stdio.h>
#include <math.h>

int main()
{
    //COMPOUND INTEREST CALC

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);
    
    printf("After %d year/s, the total will be P%.2lf", years, total);


    return 0;
}