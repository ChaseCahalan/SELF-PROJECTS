#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    //PROMPT USER

int cents;
do {
    cents = get_int("Change owed: ");
} while (cents<0);

int quarters = cents / 25;
cents= cents % 25;

int dimes = cents / 10;
cents = cents % 10;

int nickels = cents / 5;
cents = cents % 5;

int pennies = cents;

int total_coins = quarters + dimes + nickels + pennies;

printf("The total number of coins is: %d\n", total_coins);
printf("The total number of quarters is: %d\n", quarters);
printf("The total number of dimes is: %d\n", dimes);
printf("The total number of pennies is: %d\n", pennies);
}

