//Program to find square of a number
#include<stdio.h>
int main()
{ 
    system("cls");
    float numb, square;
    printf("Enter the number to find it's square: ");
    scanf("%f", &numb);
    square = numb * numb;
    printf("\nSquare of the given number %.2f is = %.2f\n\n", numb, square);
    return 0;
}