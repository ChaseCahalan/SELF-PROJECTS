#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Create a C program that simulates a number guessing game.
Rules:
The program will randomly generate a secret number between 1 and 100 (inclusive).
The player has a limited number of guesses (e.g., 7 guesses) to find the secret number.
After each guess, the program will provide feedback:
"Too high!" if the guess is greater than the secret number.
"Too low!" if the guess is less than the secret number.
"Congratulations! You guessed the number!" if the guess is correct.
If the player runs out of guesses, the program reveals the secret number and prints "Sorry, you ran out of guesses! The secret number was X.*/



int main()
{

//GREET THE USER TO THE GAME
printf("Welcome to the Number Guessing Game!\nGuess a Number between 0 - 50 and I will tell you if you win!\n");


//INITIALIZE RANDOM NUMBER AND GIVE IT A VALUE
int maxNumber = 50;
srand (time(NULL));
int secretNumber = rand() % maxNumber + 1;



//PROMPT  THE USER TO ENTER A NUMBER TO BEGIN THE GAME
int guess;
int guessesLeft = 7;

while (guessesLeft > 0)
{
    printf("You have %d tries, guess a number: ", guessesLeft);
    scanf("%d", &guess);
    guessesLeft--;

    if (guess == secretNumber)
   {
       printf("You win!\n");
       break;

   } else if (guess > secretNumber)

   {
       printf("Too high. Try again!\n");


   } else

   {
       printf("Too low. Try again!\n");

   }

    } if (guessesLeft == 0)
    {
        printf("You're out of guesses, the correct number was %d. Thanks for playing!", secretNumber);
    }



    return 0;
}
