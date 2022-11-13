//Program to swap any two numbers
#include<stdio.h>
int main()
{
    system("cls");
    float a, b;
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of B: ");
    scanf("%f", &b);
    printf("\nBefore swap A = %.2f B = %.2f",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter swap A = %.2f B = %.2f\n\n",a,b);
    return 0;
}
