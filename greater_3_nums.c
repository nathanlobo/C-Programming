// Program to find Greater of 2 numbers (greater_3_nums.c)
#include<stdio.h>
int main()
{
    system("cls");
    float num1, num2, num3;
    printf("Enter 3 numbers to check which is Greater: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if ((num1 > num2) && (num1 > num3))
    {
        printf("%.2f is greater than %.2f and %.2f\n", num1, num2, num3);
    }
    else if ((num2 > num3) && (num2 > num1))
    {
        printf("%.2f is greater than %.2f and %.2f\n", num2, num1, num3);
    }
    else 
    {
        printf("%.2f is greater than %.2f and %.2f\n", num3, num1, num2);
    }
    return 0;
}