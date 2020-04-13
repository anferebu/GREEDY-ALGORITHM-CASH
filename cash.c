#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change:"); //Prompts the user for a value
    }
    while (dollars <= 0); //Condition to accept only non-negative values
    
    int cents = round(dollars * 100); //Conversion of dollars to cents
    int coins = 0; //Counter of coins
    int quarters = 0; //Counter of quarters
    int dimes = 0; //Counter of dimes
    int nickels = 0; //Counter of nickels
    int pennies = 0; //Counter of pennies
    
    while (cents > 0) //Loop to calculate the number of coins
    {
        while (cents >= 25)
        {
            quarters = quarters + 1;
            cents = cents - 25;
        }
        while (cents >= 10)
        {
            dimes = dimes + 1;
            cents = cents - 10;
        }
        while (cents >= 5)
        {
            nickels = nickels + 1;
            cents = cents - 5;
        }
        while (cents >= 1)
        {
            pennies = pennies + 1;
            cents = cents - 1;
        }
    }
    coins = quarters + dimes + nickels + pennies; //Calculation of the number of coins
    printf("%i\n", coins);
}
