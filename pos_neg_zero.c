//Program to check wether a number is positive, negative or zero.(pos_neg_zero.c)
#include<stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is positive number\n", num);
    }
    else if (num < 0)
    {
        printf("%d is negative number\n", num);
    }
    else 
    {
        printf("%d is equal to zero\n", num);
    }
    return 0;
}