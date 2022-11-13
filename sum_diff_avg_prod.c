//Program to find the sum, difference, average and product of two numbers
#include<stdio.h>
int main()
{
    system("cls");
    float num1, num2, sum, diff, avg, prod;
    printf("Enter any 2 Numbers:");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    printf("\nThe sum of %f and %f is %f\n", num1, num2, sum);
    diff = num1 - num2;
    printf("The difference of %f and %f is %f\n", num1, num2, diff);
    avg = (num1 + num2) / 2;
    printf("The average of %f and %f is %f\n", num1, num2, avg);
    prod = num1 * num2;
    printf("The product of %f and %f is %f\n\n", num1, num2, prod);
    return 0;
}
