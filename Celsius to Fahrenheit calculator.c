#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;


    printf("What is the temperature in celsius: ");
    scanf("%f", &celsius);

    float Fahrenheit = (celsius * 9.0 / 5.0) + 32;


    printf("The temperature in Fahrenheit is:%.2f", Fahrenheit, celsius);






    return 0;
}
