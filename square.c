//Program to find area and perimeter of square
#include<stdio.h>
int main ()
{
    system ("cls");
    float side, area, perimeter;
    printf("Enter the value of side in cm: ");
    scanf("%f", &side);
    area = side * side;
    printf("\n\nArea of Square is %f", area);
    perimeter = 4 * side;
    printf("\nPerimeter of Square is %f \n\n", perimeter);
    return 0;
}
