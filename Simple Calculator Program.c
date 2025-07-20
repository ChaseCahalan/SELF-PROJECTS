#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ASK THE USER FOR A NUMBERS
    printf("Enter a number:\n");
    //USER ENTERS FIRST NUMBER
    float num1;
    scanf("%f", &num1);

    //PROMPT USER FOR SECOND NUMBER
    printf("Enter a second number:\n");
    //USER ENTERS SECOND NUMBER
    float num2;
    scanf("%f", &num2);

    //PROMPT THE USER FOR AN OPERATION + - * /
    printf("Enter an operation:\n");
    //USER ENTERS AN OPERATION
    char operation;
    scanf(" %c", &operation);

    //PROGRAM DOES THE MATH THE USER INPUTS AND OUPUTS THE ANSWER
    float result;

   if(operation == '+')
   {
       result = num1 + num2;
       printf("%.2f\n", result);

   } else if (operation == '-')
   {
       result = num1 - num2;
       printf("%.2f\n", result);

   } else if (operation == '*')
   {
       result = num1 * num2;
       printf("%.2f\n", result);

   } else if (operation == '/')
   {
       result = num1 / num2;
       printf("%.2f\n", result);

   }

    return 0;
}
