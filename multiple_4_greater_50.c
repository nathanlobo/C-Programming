// Program to determine if a number is a multiple of 4 and is greater than 50 (multiple_4_greater_50.c)
#include<stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if ((num % 4 == 0) && (num > 50))
    {
        printf("%d is a multiple of 4 and is greater than 50\n\n", num);
    } 
    else if ((num % 4 != 0) && (num > 50))
    {
        printf("%d is not a multiple of 4 but is greater than 50\n\n", num);
    } 
    else if ((num % 4 == 0) && (num <= 50)) 
    {
        printf("%d is a multiple of 4 but is not greater than 50\n\n", num);
    }
    else 
    {
        printf("%d is not a multiple of 4 and is not greater than 50\n\n", num);
    }
    return 0;
}