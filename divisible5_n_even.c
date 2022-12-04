// Program to find if an integer is Divisible by 5 and an Even Number (divisible_by_5_n_even.c)
#include<stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter an Interger: ");
    scanf("%d", &num);
    if ((num % 5 == 0) && (num % 2 == 0))
    {
        printf("%d is Divisible by 5 and is an even number\n\n", num);
    } 
    else if ((num % 5 == 0) && (num % 2 != 0))
    {
        printf("%d is Divisible by 5 but is not an even number\n\n", num);
    } 
    else if ((num % 5 != 0) && (num % 2 == 0)) 
    {
        printf("%d is not Divisible by 5 but is an even number\n\n", num);
    }
    else 
    {
        printf("%d is not Divisible by 5 and is not an even number\n\n", num);
    }
    return 0;
}