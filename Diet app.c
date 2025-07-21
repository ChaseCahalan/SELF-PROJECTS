#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("How many pizza slices did you eat: ");
    int slices;
    scanf("%d", &slices);
    int caloriesperSlice = 250;


    switch (slices)
 {

 case 1:
    printf("You did a good job!\n");
    break;

 case 2:
    printf("You did an ok job!\n");
    break;

 case 3:
    printf("You did a bad job!\n");
    break;

 case 4:
    printf("Enjoy heart disease fatty!\n");
    break;

 default:
    printf("That is just dissapointing\n");
    break;
}

    printf("You had %d calories\n", caloriesperSlice * slices);

    return 0;
}
