#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{

   int maxValue = 50;
   srand (time(NULL));
   int randomNumber = rand() % maxValue + 1;

   printf("Guess a number between 0 - %d: ", maxValue);
   int input;
   scanf("%d", &input);

   if(input == randomNumber)
   {
       printf("You win!\n");
   } else
   {
       printf("You don't win! The correct number was %d Try again!\n", randomNumber);
   }
   }

