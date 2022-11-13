// Program to find the quotient and remainder
#include<stdio.h>
int main()
{
    system("cls");
    int num1, num2, qi, rem;
    printf("Enter the Dividend: ");
    scanf("%d", &num1);
    printf("Enter the Divisor: ");
    scanf("%d", &num2);
    qi = num1 / num2;
    rem = num1 % num2;
    printf("The Qoutient is %d\n", qi);
    printf(" The Remainder is %d\n", rem);
    return 0;
}
