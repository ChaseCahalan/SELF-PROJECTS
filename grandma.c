#include <stdio.h>
#include <stdlib.h>


int main() {         // This is the starting point of the C program.
    char name[50];     // This creates a space in the computer's memory to store a name, like a sticky note that can hold up to 50 letters.

    printf("Grandma: Hello?! What's your name who's at the door?\n"); // The program greets the user and asks for their name.
    scanf("%s", name); // The computer waits for the user to type their name and saves it.

    printf("Grandma: Oh, %s,  Grandma is so happy to see you.\n", name); // The program acknowledges the name and expresses happiness.

    printf("Grandma: Are you hungry? I just made some cookies.  (yes/no)\n"); // The program asks if the user wants a cookie.
    char answer1[10]; // Another space to store the user's answer, up to 10 letters.
    scanf("%s", answer1); // The computer waits for the user's answer about the cookies.

    if (answer1[0] == 'y' || answer1[0] == 'Y') { // If the answer starts with 'y' or 'Y', indicating "yes" then prints
        printf("Grandma: Wonderful! Here, have a big, warm cookie. Don't be shy!\n"); // The program offers a cookie.
    } else { // Otherwise if the user didn't say "yes"
        printf("Grandma: Oh, that's alright, sweetie. More for me then! But you can always change your mind.\n"); // The program responds accordingly.
    }

    printf("Grandma: It was lovely chatting with you, %s. Come back soon, okay?\n", name); // The program says goodbye.
    char answer2 [20];
    scanf("%s", answer2);
    printf("Grandma: Bye Bye Now!\n");


    return 0; // END OF PROGRAM
}

