// Program to find Greater of 2 numbers (greater_2_nums.c)
#include<stdio.h>
int main()
{
    system("cls");
    float num1, num2;
    printf("Enter 2 numbers to check which is Greater: ");
    scanf("%f %f", &num1, &num2);
    if (num1 > num2){
        printf("%.2f is greater than %.2f.", num1, num2);
    }
    else {
        printf("%.2f is greater than %.2f.\n", num2, num1);
    };
    return 0;
}