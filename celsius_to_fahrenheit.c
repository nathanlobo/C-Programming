// Program to convert Celsius to Fahrenheit
#include<stdio.h>
int main()
{
    system ("cls");
    float fahrenheit, celsius;
    printf("Enter value of Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = ((celsius * 9 / 5) + 32);
    printf("\n\nTemperature in Fahrenheit %f \n\n", fahrenheit);
    return 0;
}
